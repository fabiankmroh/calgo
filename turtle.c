#include <stdio.h>

int main(void){
    int height, climb, sleep;

    scanf("%d %d %d", &climb, &sleep, &height);
    printf("%d\n", (height-sleep-1)/(climb-sleep)+1);
}