#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    if(m <= 2) cout << m - 1 << endl;
    else{
        long long n1 = 0, n2 = 1;
        long long n = 0;
        for(int i = 0; i < m - 2; i++){
            n = (n1 + n2);
            n1 = n2, n2 = n;
        }
        cout << n << endl;
    }
}