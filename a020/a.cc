#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string id;
    cin >> id;
    bool valid = (id.length() == 10);
    string ans[] = {"fake", "real"};
    if(valid){
        int table[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20,
        21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};
        int val = (table[id[0] - 'A'] / 10) + ((table[id[0] - 'A'] % 10) * 9);
        #ifdef debug
        cout << "val1 = " << val << endl;
        #endif
        for(int i = 9, j = 0; i >= 1; i--, j++){
            val += ((id[i] - '0') * (j + (!j)));
        }
        #ifdef debug
        cout << "val2 = " << val << endl;
        #endif
        cout << ans[!(val % 10)] << endl;
    }
    else cout << ans[0] << endl;
}