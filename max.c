#include <stdio.h>

int main(void){
    int n, i;
    int temp;
    int max = 0;
    int maxc;

    for(i = 1; i <= 9; i++){
        scanf("%d", &temp);

        if(temp > max){
            max = temp;
            maxc = i;
        }
    }

    printf("%d\n%d\n", max, maxc);
}