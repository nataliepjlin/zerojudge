#include <iostream>
using namespace std;
#define N 20
int main(){
    int tri[N][N] = {{0}};
    int n; 
    while(cin >> n){
        for(int i = 0; i < n; i++){
            tri[i][0] = 1;
            cout << tri[i][0];
            for(int j = 1; j <= i; j++){
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
                cout << " " << tri[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}