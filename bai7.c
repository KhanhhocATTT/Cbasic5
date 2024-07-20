#include <stdio.h>
#include <math.h>

int count(int n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ++cnt;
            if(i != n/i){
                ++cnt;
            }
        }
    }

    return cnt;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        long long a;
        scanf("%lld", &a);
        if(count(a) % 2 == 0) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}