#include <iostream>
using namespace std;
int main(){
    int n, m, l, r;
    int num;
    int sums[100001];
    sums[0] = 0;
    while(cin >> n >> m){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> num;
            sums[i] = sums[i - 1] + num;
        }
        for(int i = 0; i < m; i++){
            cin >> l >> r;
            cout << sums[r] - sums[l - 1] << endl;
        }
    }
}