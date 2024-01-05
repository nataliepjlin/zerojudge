#include <iostream>
#include <algorithm>
using namespace std;
#define N 1000
int in(int r, int c, int row, int col){
    return(r >= 0 && c >= 0 && r < row && c < col);
}
void counter(const int r, const int c, const int row, const int col, 
int *neighbor, int *low, int *high, const int office[N][N], 
const int dr[], const int dc[]){
    for(int i = 0; i < 4; i++){
        int nr = r + dr[i], nc = c + dc[i];
        if(in(nr, nc, row, col)){
            *neighbor += 1;
            *low += (office[r][c] > office[nr][nc]);
            *high += (office[r][c] < office[nr][nc]);
        }
    }
    return;
}
void cpy(int office[N][N], int newoffice[N][N], int row, int col){
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            office[r][c] = newoffice[r][c];
            #ifdef debug
            cout << office[r][c] << " ";
            #endif
        }
        #ifdef debug
        cout << endl;
        #endif
    }
    return;
}
int main(){
    int row, col, day;
    cin >> row >> col >> day;
    int office[N][N], newoffice[N][N];
    int firstsum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> office[i][j];
            firstsum += office[i][j];
        }
    }

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int neighbor, high, low, ksum;
    for(int i = 0; i < day; i++){
        ksum = 0;
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                newoffice[r][c] = office[r][c];
                neighbor = 0, high = 0, low = 0;
                counter(r, c, row, col, &neighbor, &low, &high, office, dr, dc);
                if(high > neighbor / 2){
                    #ifdef debug
                    cout << "high > neighbor / 2" << endl;
                    #endif
                    newoffice[r][c]++;
                }
                else if(low > neighbor / 2){
                    #ifdef debug
                    cout << "low > neighbor / 2" << endl;
                    #endif
                    newoffice[r][c]--;
                }
                #ifdef debug
                cout << "neighbor = " << neighbor << ", high = " << high << ", low = " << low << endl;
                cout << "office[" << r << "]" << "[" << c << "] = " << office[r][c] << "->" << newoffice[r][c] << endl; 
                cout << endl;
                #endif
                ksum += newoffice[r][c];
            }//col
        }//row
        cpy(office, newoffice, row, col);
    }//day
    cout << ksum - firstsum << endl;
}