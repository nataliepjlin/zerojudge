#include <iostream>
using namespace std;
int main(){
    int a1, b1, c1, a2, b2, c2, n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int maxprof = INT32_MIN;
    for(int x1 = 0; x1 <= n; x1++){
        int x2 = n - x1;
        maxprof = max((a1 * (x1 * x1) + b1 * x1 + c1) + (a2 * (x2 * x2) + b2 * x2 + c2), maxprof);
    }
    cout << maxprof << endl;
}