#include <stdio.h>

int main(void){
    int burger[3];
    int drink[2];
    int set = 0;
    int min = 2100;

    int i, j;

    for(i = 0; i < 3; i++){
        scanf("%d", &burger[i]);
    }
    
    for(i = 0; i < 2; i++){
        scanf("%d", &drink[i]);
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            set = burger[i] + drink[j] - 50;

            if(set < min){
                min = set;
            }
        }
    }

    printf("%d\n", min); 
}