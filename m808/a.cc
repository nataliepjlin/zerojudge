#include <iostream>
#include <string.h>
#define N 21
using namespace std;
// void printbd(char bd[N][N], int size){
//     for(int i = 0; i < size; i++){
//         for(int j = 0; j < size; j++){
//             if(bd[i][j]) cout << bd[i][j];
//             else cout << '.';
//         }
//         cout << endl;
//     }
//     return;
// }
int in(int x, int y, int size){
    return(x >= 0 && y >= 0 && x < size && y < size);
}
int main(){
    int size, wcnt;
    string dir, word; int x, y;
    while(cin >> size){
        cin >> wcnt;
        char bd[N][N] = {0};
        int valid = 1;
        for(int i = 0; i < wcnt && valid; i++){
            cin >> dir >> word >> x >> y;
            int len = word.length();
            if(dir[0] == 'V'){
                valid = in(x, y + len - 1, size);
                for(int j = 0; j < len && valid; j++){
                    if(bd[x][y + j] == 0 || bd[x][y + j] == word[j])
                        bd[x][y + j] = word[j];
                    else valid = 0;
                }
            }
            else{
                valid = in(x + len - 1, y, size);
                for(int j = 0; j < len && valid; j++){
                    if(bd[x + j][y] == 0 || bd[x + j][y] == word[j])
                        bd[x + j][y] = word[j];
                    else valid = 0;
                }
            }
            #ifdef debug
            cout << endl;
            printbd(bd, size);
            #endif
        }//wcnt
        (valid) ? cout << "Yes" : cout << "No";
        cout << endl;
    }
}