#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int h[105];
    int z[n], zcnt = 0;
    for(int i = 1; i <= n; i++){
        cin >> h[i];
        if(h[i] == 0) z[zcnt++] = i;
    }
    h[0] = INT32_MAX, h[n + 1] = INT32_MAX;
    int cost = 0;
    for(int i = 0; i < zcnt; i++){
        cost += min(h[z[i] - 1], h[z[i] + 1]);
    }
    cout << cost << endl;
}