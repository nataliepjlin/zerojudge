#include <iostream>
using namespace std;
int main(){
    int i, j;
    while(cin >> i >> j)
        cout << ((j - (j % 2)) - (i + (i % 2))) / 2 + 1 << endl;
}