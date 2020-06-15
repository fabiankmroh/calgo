#include <stdio.h>
#include <queue>

using namespace std;

int map[100][100];
int maph, mapw;


typedef struct location{
    int x;
    int y;
    int dist;
} loc;

int main(void){
    queue<loc> q;
    scanf("%d %d", &mapw, &maph);
    printf("Map size entered\n");

    int i, j;

    printf("Start of Input Loop\n");
    for(i = 0; i < mapw; i++){
        for(j = 0; j < maph; j++){
            printf("i: %d j: %d\n", i, j);
            scanf("%d", &map[i][j]);
        }
    }

    printf("Before push\n");
    q.push((loc){0, 0, 0});
    printf("Before declaring C\n");
    loc c;

    while(!q.empty()){
        c = q.front();
        printf("C is assigned front\n");

        if(c.x == (mapw-1) && c.y == (maph-1)){
            printf("Final conditional statement\n");
            printf("%d\n", c.dist);

            return 0;
        }

        q.pop();
        printf("Q.pop\n");
        if(map[c.x+1][c.y] != 0 && c.x+1 < mapw){
            q.push((loc){c.x+1, c.y, c.dist+1});
            printf("%d %d %d\n", c.x+1, c.y, c.dist+1);
        }
        if(map[c.x-1][c.y] != 0 && c.x-1 >= 0){
            q.push((loc){c.x-1, c.y, c.dist+1});
            printf("%d %d %d\n", c.x-1, c.y, c.dist+1);
        }
        if(map[c.x][c.y+1] != 0 && c.y+1 < maph){
            q.push((loc){c.x, c.y+1, c.dist+1});
            printf("%d %d %d\n", c.x, c.y+1, c.dist+1);
        }
        if(map[c.x][c.y-1] != 0 && c.y-1 >= 0){
            q.push((loc){c.x, c.y-1, c.dist+1});
            printf("%d %d %d\n", c.x, c.y-1, c.dist+1);
        }
    }

    return 0;
}