#include <iostream>
using namespace std;
int main(){
    int a, b;
    while(cin >> a >> b){
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(i == 1) continue;
            int isp = 1;
            for(int j = 2; (j * j <= i) && isp; j++){
                isp = (i % j != 0);
            }
            cnt += isp;
        }
        cout << cnt << endl;
    }
}