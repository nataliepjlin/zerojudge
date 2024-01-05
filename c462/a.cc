#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>
using namespace std;
int main(){
    int k;
    string str;
    cin >> k >> str;
    int len = str.length();
    vector<int>segs;
    int cnt = 1;
    for(int i = 1; i < len; i++){
        if(!(isupper(str[i - 1]) ^ isupper(str[i]))) cnt++;
        else{
            segs.push_back(cnt);
            cnt = 1;
        }
    }
    if(cnt) segs.push_back(cnt);

    int nowans = 0, maxans = 0;
    for(int i = 0; i < segs.size(); i++){
        if(segs[i] == k) nowans += k;
        else if(segs[i] < k){
            maxans = max(maxans, nowans);
            nowans = 0;
        }
        else{
            nowans += k;
            maxans = max(maxans, nowans);
            nowans = k;
        }
    }
    maxans = max(maxans, nowans);
    cout << maxans << endl;
}