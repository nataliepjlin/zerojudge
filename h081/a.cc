#include <iostream>
using namespace std;
int main(){
    int n, d;
    cin >> n >> d;
    int nowp, lastsold, buyp, hold = 0, soldbefore = 0;
    int prof = 0;
    for(int i = 0; i < n; i++){
        cin >> nowp;
        if(i == 0 || (soldbefore && !hold && nowp <= lastsold - d)){
            #ifdef debug
            cout << "buy at $" << nowp << endl;
            #endif
            buyp = nowp;
            hold = 1;
        }
        else if(hold && nowp >= buyp + d){
            lastsold = nowp;
            prof += nowp - buyp;
            #ifdef debug
            cout << "sold at $" << nowp << ", now prof = $" << prof << endl;
            #endif
            hold = 0, soldbefore = 1;
        }
    }
    cout << prof << endl;
}