#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int len = str.length();
    #ifdef debug
    cout << len << endl;
    #endif
    int l = 0, r = len - 1;
    bool flag = true;
    while(l <= r && flag){
        flag = (str[l] == str[r]);
        l++, r--;
    }
    if(flag) cout << "yes" << endl;
    else cout << "no" << endl;
}