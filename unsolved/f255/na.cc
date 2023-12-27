#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        if(!n) return 0;
        cout << pow(2, n) << endl;
    }
}