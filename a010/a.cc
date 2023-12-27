#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int idx = 0, ppow[10000], base[10000];
    int target = n;
    for(int i = 2; i * i <= n && target != 1; i++){
        #ifdef debug
        cout << "i = " << i << ", target = " << target << endl;
        #endif
        int p = 0;
        while(target % i == 0){
            p++;
            target /= i;
        }
        if(p > 0){
            ppow[idx] = p;
            base[idx] = i;
            idx++;
        }
    }
    if(target != 1){
        ppow[idx] = 1;
        base[idx] = target;
        idx++;
    }
    for(int i = 0; i < idx; i++){
        if(ppow[i] > 1) cout << base[i] << "^" << ppow[i];
        else cout << base[i];

        if(i != idx - 1) cout << " * ";
    }
    cout << endl;
    return 0;
}