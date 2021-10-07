//왕실의 나이트

#include <stdio.h>
char d[];

int dx[] = {-2, -1, 1, 2, 1, -1, -2};
int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int main(void){
    scanf("%d", d);
    int row = d[1] - '0';
    int column = d[0] - 'a'+1;

    int result = 0;
    for(int i = 0; i<8; i++){
        int nextRow = row + dx[i];
        int nextColumn = column +dy[i];

        if(nextRow >=1 && nextRow <=8 && nextColumn >=1 && nextColumn <=8){
            result +=1;
        }
    }
    prinf("%d", result);
    return 0;
}