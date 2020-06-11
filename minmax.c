#include <stdio.h>

int main(void){
    int n;
    int i;
    int min = 1000000;
    int max = -1000000;
    int temp;

    scanf("%d", &n);


    for(i = 0; i < n; i++){
        scanf("%d", &temp);

        if(min > temp){
            min = temp;
        }
        if(max < temp){
            max = temp;
        }
    }

    printf("%d %d\n", min, max);
}