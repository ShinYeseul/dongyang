// bfs
#include <stdio.h>

#define N 9
int visited[N];
int g[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

void dfs(int here) {
 
    //here이 이미 방문된 정점이라면 다시 처음으로
    if (visited[here]) return;
  
    printf("%d", here);
 
    visited[here] = 1;  //지금 here 방문
 
    for (int next = 0; next < N; next++) 
        //아직 다음 정점이 방문되지 않았으면 ㄱㄱ
        if (g[here][next] == 1 && !visited[next]) dfs(next);
}

int main(void)
{
    bfs(1);
    return 0;
}