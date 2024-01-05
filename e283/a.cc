#include <iostream>
#include <string.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char table[16]; 
        table[5] = 'A';
        table[7] = 'B';
        table[2] = 'C';
        table[13] = 'D';
        table[8] = 'E';
        table[12] = 'F';
    while(cin >> n){
        for(int i = 0; i < n; i++){
            int x = 0, tmp;
            for(int j = 0; j < 4; j++){
                cin >> tmp;
                x = x * 2 + tmp;
            }
            cout << table[x];
        }
        cout << '\n';
    }
    return 0;
}