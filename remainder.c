#include <stdio.h>

int i, j;
int nameoji[10];
int cnt = 0;
int input[10];

void different(int n){
    for(j = 0; j < 10; j++){
        if(nameoji[j] == n){
            return;
        }
    }

    nameoji[cnt] = n;
    cnt++;

    return;
}

int main(void){
    for(i = 0; i < 10; i++){
        nameoji[i] = -1;
    }

    for(i = 0; i < 10; i++){
        scanf("%d", &input[i]);
    }

    for(i = 0; i < 10; i++){
        different(input[i] % 42);
    }

    printf("%d\n", cnt);
}