#include <iostream>
using namespace std;
void put(int arr[], int idx, int m, int *diff, int w1, int w2){
    int nowdiff = abs(w1 - w2);
    if(nowdiff >= *diff)
        return;
    if(idx >= m){
        *diff = nowdiff;
        return;
    }
    put(arr, idx + 1, m, diff, w1 + arr[idx], w2);
    put(arr, idx + 1, m, diff, w1, w2 + arr[idx]);
}
int main(){
    int n, m;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> arr[j];
        }
        int diff = INT32_MAX;
        put(arr, 0, m, &diff, 0, 0);
        cout << diff << endl;
    }
}