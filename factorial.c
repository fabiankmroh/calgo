#include <stdio.h>

int multiply(int n){
    if(n >= 1){
        return n * multiply(n-1);
    }
    else{
        return 1;
    }
}

int main(void){
    int input;
    
    scanf("%d", &input);
    printf("%d\n", multiply(input));

    return 0;
}