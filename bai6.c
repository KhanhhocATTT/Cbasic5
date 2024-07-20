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
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        int n;
        scanf("%d", &n);
        printf("%d\n", count(n));
    }

    return 0;
}