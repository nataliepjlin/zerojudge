#include <iostream>
using namespace std;
void gcd(int a, int b){
    if(a % b == 0){
        cout << b << endl;
        return;
    }
    gcd(b, a % b);
}
int main(){
    int x, y;
    cin >> x >> y;
    int a = max(x, y), b = min(x, y);
    gcd(a, b);
}