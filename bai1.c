#include <stdio.h>
#include <math.h>

int reverse(long long n){
    long long a = n;
    int S;
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

    for(int i = 1; i <= n; i++){
        long long a;
        scanf("%lld", &a);
        if(reverse(a) == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}