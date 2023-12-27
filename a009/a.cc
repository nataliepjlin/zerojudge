#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++){
        str[i] -= 7;
    }
    cout << str << endl;
}