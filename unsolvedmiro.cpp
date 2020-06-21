#include <stdio.h>

using namespace std;

char map[101][101];
bool visited[101][101] = { false, };
int rowM, colM;
int i, j;
int min = 10000;

void miro(int row, int col, int dist){
    if(row == rowM && col == colM){
        printf("1\n");
        if(dist < min)
            min = dist;
        return;
    }

    // Top
    if(map[row-1][col] == '1' && row-1 >= 0 && visited[row-1][col] == false){
        printf("2\n");
        visited[row][col] = true;
        miro(row-1, col, dist+1);
    }

    // Bottom
    if(map[row+1][col] == '1' && row+1 <= rowM && visited[row+1][col] == false){
        printf("3\n");
        visited[row+1][col] = true;
        miro(row+1, col, dist+1);
    }

    // Left
    if(map[row][col-1] == '1' && col-1 >= 0 && visited[row][col-1] == false){
        printf("4\n");
        visited[row][col] = true;
        miro(row, col-1, dist+1);
    }

    // Right
    if(map[row][col+1] == '1' && col+1 <= colM && visited[row][col+1] == false){
        printf("5\n");
        visited[row][col] = true;
        miro(row, col+1, dist+1);
    }
    printf("6\n");
    return;
}

int main(void){
    scanf("%d %d", &rowM, &colM);

    for(i = 0; i < rowM; i++){
        scanf("%s", map[i]);
    }
    rowM--;
    colM--;

    miro(0,0,0);
    
    printf("%d\n", min);

}