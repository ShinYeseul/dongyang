// DFS  

#include <stdio.h>
#include <stdbool.h>

bool visited[9];
int graph[9][3] = {{}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7}};

void dfs (int x){
    visited[x] = true;

    printf("%d", x);

    // 인접한 노드가 방문한 적이 없다면 DFS수행
    for(int node = 0; node<sizeof(graph[x])/sizeof(int);node++){
        if(!visited[node]){
            dfs(node);
        }
    }
}

int main(void)
{
    dfs(1);
}