#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100001];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    int sum1 = arr[0], sum2 = arr[n - 1];
    for(int l = 0, r = n - 1; l < n && r >= 0;){
        if(sum1 == sum2){
            cnt++;
            sum1 += arr[++l];
        }
        else if(sum1 > sum2)
            sum2 += arr[--r];
        else sum1 += arr[++l];
    }
    cout << cnt << endl;
    return 0;
}