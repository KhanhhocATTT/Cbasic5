#include <stdio.h>
#include <math.h>

int sum(int n){
    int S = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            S += i;
            if(i != n / i){
                S += n / i;
            }
        }
    }
    return S;
}

int main(){
    int a;
    scanf("%d", &a);

    for(int i = 1; i <= a; i++){
        int n;
        scanf("%d", &n);
        printf("%d\n", sum(n));
    }

    return 0;
}