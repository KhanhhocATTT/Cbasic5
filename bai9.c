#include <stdio.h>

int sum(long long n){
    int S = 0;
    while(n){
        S += n % 10;
        n /= 10;
    }

    return S;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = i ; i <= n; i++){
        long long a;
        scanf("%lld", &a);
        printf("%d", sum(a));
    }

    return 0;
}