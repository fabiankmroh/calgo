#include <stdio.h>

int main(void){
    int n;
    int i, j;

    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        for(j = 0; j < n; j++){
            if(i % 2 == 1){
                if(j % 2 == 0){
                    printf(" ");
                }
                if(j % 2 == 1){
                    printf("*");
                }
            }
            else{
                if(j % 2 == 0){
                    printf("*");
                }
                if(j % 2 == 1){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}