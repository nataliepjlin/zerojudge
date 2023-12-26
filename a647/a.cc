#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n, m, p;
    cin >> n;
    float x;
    for(int i = 0; i < n; i++){
        cin >> m >> p;
        x = static_cast<float>(p - m) / m;

        if(x * 100 >= 0)
            x += 0.0000001;// 如果%>=0則+0.0000001，<0則-0.0000001，可以除去誤差，使得 9.999999999 進位變成 10
        else x -= 0.0000001;
        
        if(x <= -0.07 || x >= 0.1)
				printf("%.2f%% dispose\n", x * 100);
			else
				printf("%.2f%% keep\n", x * 100);
    }
}