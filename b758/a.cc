#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int hr, min;
    cin >> hr >> min;
    hr += 2, min += 30;
    if(min >= 60){
        min -= 60;
        hr++;
    }
    hr -= 24 * (hr >= 24);
    cout << setfill('0') << setw(2) << hr << ":"<< setfill('0') << setw(2) << min << endl;
    return 0;
}