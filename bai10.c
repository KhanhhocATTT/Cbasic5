#include <stdio.h>

void fibo(int n){
    if(n = 1) printf("0");
    else if(n = 2) printf("0 1");
    else{
        printf("0 1 ");
        long long fn1 = 1, fn2 = 0;
        for(int i = 2; i < n; i++){
            long long fn = fn1 + fn2;
            printf("%lld ", fn);
            fn2 = fn1;
            fn1 = fn;
        }
    }
}
int main(){
    fibo(5);

    return 0;
}