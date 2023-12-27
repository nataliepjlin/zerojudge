#include <iostream>
#include <string.h>
using namespace std;
void printans(int ans[], int start){
    for(int i = start; i >= 0; i--){
        cout << ans[i];
    }
    cout << endl;
    return;
}
int main(){
    string s1, op, s2;
    cin >> s1 >> op >> s2;
    int n1[501] = {0}, n2[501] = {0}, len1 = s1.length(), len2 = s2.length();
    for(int s = len1 - 1, n = 0; s >= 0; s--, n++){
        n1[n] = s1[s] - '0';
        #ifdef debug
        cout << n1[n];
        #endif
    }
    #ifdef debug
    cout << endl;
    #endif

    for(int s = len2 - 1, n = 0; s >= 0; s--, n++){
        n2[n] = s2[s] - '0';
        #ifdef debug
        cout << n2[n];
        #endif
    }
    #ifdef debug
    cout << endl;
    #endif

    int ans[501] = {0}, start = 0;
    if(op[0] == '+'){
        #ifdef debug
        cout << "ADD" << endl;
        #endif
        int mx = max(len1, len2);
        for(int i = 0; i < mx; i++){
            ans[i] += (n1[i] + n2[i]);
            start = i;
            if(ans[i] >= 10){
                ans[i] -= 10;
                ans[i + 1]++;
                start = i + 1;
            }
        }
        printans(ans, start);
    }//add
    else if(op[0] == '*'){
        #ifdef debug
        cout << "MUL" << endl;
        #endif
        for(int i = 0; i < len1; i++){
            for(int j = 0; j < len2; j++){
                ans[i + j] += (n1[i] * n2[j]);
                start = max(i + j, start);
                if(ans[i + j] >= 10){
                    ans[i + j + 1] += ans[i + j] / 10;
                    start = max(start, (i + j) + ((int)(to_string(ans[i + j]).length()) - 1));
                    ans[i + j] %= 10;
                }
            }
        }
        printans(ans, start);
    }//mul
}