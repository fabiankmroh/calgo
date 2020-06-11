#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    int loop, i, repeat;
    char S[20];

    scanf("%d", &T);

    for(loop = 0; loop < T; loop++){
        scanf("%d", &repeat);

        scanf("%s", S);

        i = 0;
        while(S[i] != '\0'){
            for(int j = 0; j < repeat; j++){
                printf("%c", S[i]);
            }
            i++;
        }
        printf("\n");
    }

    return 0;
}