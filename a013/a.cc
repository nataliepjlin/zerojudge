#include <iostream>
#include <string.h>
using namespace std;
int find(char c, int table[]){
    return table[c - 'A'];
}
int char2int(string str, int table[]){
    int len = str.length();
    int arr[len];
    for(int i = 0; i < len; i++){
        arr[i] = find(str[i], table);
    }
    int n = 0;
    for(int i = 0; i < len; i++){
        if(i < len - 1 && arr[i] < arr[i + 1]) n -= arr[i];
        else n += arr[i];
    }
    return n;
}
void int2char(int n, int val[], string chars[]){
    string ans = ""; int v = 0;
    #ifdef debug
    cout << "n = " << n << endl;
    #endif
    while(n > 0){
        int cnt = n / val[v];
        #ifdef debug
        cout << "cnt = " << cnt << endl;
        #endif
        for(int i = 0; i < cnt; i++){
            ans += chars[v];
            #ifdef debug
            cout << "nowans = " << ans << endl;
            #endif
        }
        n -= val[v] * cnt;
        v++;
    }
    cout << ans << endl;
}
int main(){
    string str1, str2;
    
    int table[26]; 
    table['I' - 'A'] = 1, table['V' - 'A'] = 5, table['X' - 'A'] = 10, table['L' - 'A'] = 50;
    table['C' - 'A'] = 100, table['D' - 'A'] = 500, table['M' - 'A'] = 1000;
    
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string chars[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    while(cin >> str1){
        if(str1 == "#") break;
        cin >> str2;
        int n1 = char2int(str1, table), n2 = char2int(str2, table);
        #ifdef debug
        cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
        #endif
        if(n1 == n2) cout << "ZERO\n";
        else int2char(abs(n1 - n2), val, chars);
    }
}