#include <stdio.h>

int main(void){
    int hour, minute;

    scanf("%d %d", &hour, &minute);

    if(minute < 45){
        minute += 60;
        hour--;

        if(hour < 0){
            hour = 23;
        }
    }

    printf("%d %d", hour, minute-45);
}