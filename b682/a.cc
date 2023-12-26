#include <iostream>
using namespace std;
int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int t1 = h1 * 60 + m1, t2 = h2 * 60 + m2;
    t2 += (t2 < t1) * 24 * 60;
    int diff = t2 - t1, h = diff / 60, m = diff % 60;
    cout << h << " " << m << endl;
}