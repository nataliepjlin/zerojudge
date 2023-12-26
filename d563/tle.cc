#include <iostream>
using namespace std;
int main(){
    int n;
    int sums[100001], num;
    cin >> n;
    sums[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> num;
        sums[i] = sums[i - 1] + num;
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){//prefix
        int f = 0;
        for(int j = n - 1; j >= 0 && !f; j--){//suffix
            if(sums[i] == sums[n] - sums[j]){
                cnt++;
                f = 1;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}