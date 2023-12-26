#include <iostream>
using namespace std;
int main(){
    int arr[100][100];
    int row, col;
    while(cin >> row >> col){
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                cin >> arr[r][c];
            }
        }
        for(int c = 0; c < col; c++){
            for(int r = 0; r < row; r++){
                cout << arr[r][c] << " ";
            }
            cout << endl;
        }
    }
}