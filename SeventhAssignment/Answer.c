// 미로
#include <stdio.h>
 
const int N = 8;
const int PATHWAY_COLOUR = 0;//아직 한 번도 가보지 못한 cell
const int WALL_COLOUR = 1;//벽이라고 정해진 cell
const int BLOCKED_COLOUR = 3;//visited이며 출구까지의 경로가 있지 않음이 밝혀진 cell
const int PATH_COLOUR = 2;//visited이며 아직 출구로 가는 경로가 될 가능성이 있는 cell
int map[N][N] = {
    { 1, 0, 1, 1, 0 },
    { 1, 1, 1, 0, 1 },
    { 0, 1, 0, 1, 1 },
    { 1, 1, 1, 1, 1 } 
};

 
int findMap(int x, int y) {
    if (x < 0 || y < 0 || x >= N || y >= N)
        return 0;
    else if (map[x][y] != PATHWAY_COLOUR)
        return 0;
    else if (x == N - 1 && y == N - 1) {
        map[x][y] = PATH_COLOUR;
        return 1;
    }
    else {
        map[x][y] = PATH_COLOUR;
        if (findMap(x - 1, y) || findMap(x, y + 1) || findMap(x + 1, y) || findMap(x, y - 1)) {
            return 1;
        }
        map[x][y] = BLOCKED_COLOUR;
        return 0;
    }
}
int main() {
    int i, j;
    printf("탈출 구 찾기 여부 : %d\n", findMap(0, 0));
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
