#include <stdio.h>
#include <math.h>

int prime(int n){
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i) return 0;
    }
    return 1;
}
int reverse(int n){
    int S;
    int a = n;
    while(n){
        int r = n % 10;
        S = S * 10 + r;
        n /= 10;
    }
    if(S == a) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && prime(i) == 1){
            ++cnt;
        }
        if(cnt >= 43 && reverse(i) == 1){
            printf("YES");
        }
    }
}