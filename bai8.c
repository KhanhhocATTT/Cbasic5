#include <stdio.h>
#include <math.h>

int sum(long long n){
    long long S = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            S += i;
            if(i != n/i){
                S += n/i;
            }
        }
    }
    if(S - n == n) return 1;
    else return 0;
}
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        long long a;
        scanf("%lld", &a);
        if(sum(a) == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}