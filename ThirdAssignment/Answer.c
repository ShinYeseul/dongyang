// 배열 값 중 0값을 찾아 배열 뒤로 배치시키기

#include <stdio.h>

int main(void)
{
    int arr[] = {2,3,0,0,4,0,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int j = 0;
    for(int i =0;i<n;i++){
        // if arr 값일 0이 아니라면
        if(arr[i]!=0){
            arr[j] = arr[i];
            j=i+1;
        }
    }

    for(int i = j; i<n; i++)
    arr[i]=0;

    for(int i = 0; i<n; i++)
        printf("%d", arr[i]);

        return 0;
}