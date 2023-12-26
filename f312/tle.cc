#include <iostream>
using namespace std;
void f(int idx, const int n, int *maxprof, int x1, int x2, 
const int a1, const int b1, const int c1,
const int a2, const int b2, const int c2){
    if(idx == n){
        int nowprof = (a1 * (x1 * x1) + b1 * x1 + c1) + (a2 * (x2 * x2) + b2 * x2 + c2);
        *maxprof = max(*maxprof, nowprof);
        return;
    }
    f(idx + 1, n, maxprof, x1 + 1, x2, a1, b1, c1, a2, b2, c2);
    f(idx + 1, n, maxprof, x1, x2 + 1, a1, b1, c1, a2, b2, c2);
}
int main(){
    int a1, b1, c1, a2, b2, c2, n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int maxprof = INT32_MIN;
    f(0, n, &maxprof, 0, 0, a1, b1, c1, a2, b2, c2);
    cout << maxprof << endl;
}