#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int f = 1;
    int v;
    while(n){
        v = n % 10;
        if(v || !f){
            cout << v;
            f = 0;
        }
        n /= 10;
    }
    if(!v && f) cout << v;
    cout << endl;
}