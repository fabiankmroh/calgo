#include <stdio.h>
int at, bt;

void update(int *a, int*b){
    at = *a;
    bt = *b;

    at = *a + *b;
    bt = *b - *a;

    if(bt < 0){
        bt *= (-1);
    }
    
    printf("%d\n%d", at, bt);

    return;
}

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);
    update(&a, &b);
}