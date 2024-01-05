#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char dict[] = "AHIMOTUVWXY";
    string str;
    cin >> str;
    int len = str.length();
    int valid = 1;

    for (int l = 0, r = len - 1; l <= r && valid; l++, r--) {
        valid = (str[l] == str[r] && strchr(dict, str[l]) != NULL
        && strchr(dict, str[r]) != NULL);
    }
    (valid) ? cout << "Yes" : cout << "No";
    cout << endl;
    return 0;
}
