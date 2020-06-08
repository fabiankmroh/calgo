#include <stdio.h>

int main(void){
    char ch[10];
    char s[1000];
    char var[1000];

    scanf("%[^\n]%*c", ch);
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", var);

    printf("%s\n", ch);
    printf("%s\n", s);
    printf("%s\n", var);
}