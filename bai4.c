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
    int S = 0;

    for(int i = 1; i <= n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        
        for(int j = a; j <= b; j++){
            if(cp(j) == 1){
                ++S;
            }
        }
    }
    printf("%d\n", S);

    return 0;
}