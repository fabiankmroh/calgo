#include <stdio.h>
int a, b, c, d;
int arr[4];
int tmp;

int maxfunc(void){
    int i, j;
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;

    for(i = 0; i < 3; i++){
        for(j = i+1; j < 4; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    return arr[3];
}

int main(void){
    scanf("%d %d %d %d", &a, &b, &c, &d);  
    printf("%d\n", maxfunc());
}
