#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    return a * (a > b) + b * (a <= b);
}
int min(int a, int b){
    return a * (a < b) + b * (a >= b);
}
int main(){
    int cnt[10] = {0};
    int a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3);
    cnt[a1]++, cnt[a2]++, cnt[a3]++;
    printf("%d", max(cnt[a3], max(cnt[a1], cnt[a2])) );
    int mx = max(a3, max(a1, a2)), mn = min(a3, min(a1, a2)), mid = a1 + a2 + a3 - mx - mn;
    printf(" %d", mx);
    (mid != mx && printf(" %d", mid));
    (mn != mx && mn != mid && printf(" %d", mn));
    printf("\n");
}