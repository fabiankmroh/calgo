#include <stdio.h>

int main(void){
    int a, b;
    int ar, br;

    scanf("%d %d", &a,&b);

    ar = (a%10)*100 + (a/10)%10*10 + (a/100)%10;
    br = (b%10)*100 + (b/10)%10*10 + (b/100)%10;

    if(ar > br)
        printf("%d\n", ar);
    else
        printf("%d\n", br);

    return 0;
}