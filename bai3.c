#include <stdio.h>
#include <math.h>

int cp (long long n){
    int i = sqrt(n);
    if(i * i == n) return 1;
    else return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        long long a, b;
        scanf("%lld %lld", &a, &b);
        for(int j = a; j <= b; j++){
            if(cp(j) == 1){
                printf("%d ", j);
            }
        }
    }

    return 0;
}