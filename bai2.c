#include <stdio.h>
#include <math.h>

int cp(long long n){
    int i = sqrt(n);
    if(i * i == n) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        long long n;
        scanf("%lld", &n);
        if(cp(n) == 1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}