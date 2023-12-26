#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int f = 0;
    for(int i = n; i <= m; i++){
        int len = to_string(i).length();
        int tmp = i, sum = 0;
        while(tmp){
            sum += pow(tmp % 10, len);
            tmp /= 10;
        }
        if(sum == i){
            cout << i << " ";
            f = 1;
        } 
    }
    if(!f) cout << "none";
    cout << endl;
}