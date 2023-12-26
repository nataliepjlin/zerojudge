#include <iostream>
using namespace std;
int main(){
    int a1, an, d;
    cin >> a1 >> an >> d;
    int f = 0;
    for(int i = a1; i != an + d; i += d){
        cout << i << " ";
    }
    if(a1 == an && !d) cout << a1;
    cout << endl;
    return 0;
}