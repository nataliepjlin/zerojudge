#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        cout << 2 + n * (n - 1) << endl;
    }
    return 0;
}