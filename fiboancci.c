#include <stdio.h>

int fibo(int n){
    if(n >= 2){
        return fibo(n-1) + fibo(n-2);
    }
    else if(n <= 1){
        return n;
    }
}

int main(void){
    int input;
    
    scanf("%d", &input);
    printf("%d\n", fibo(input));

    return 0;
}