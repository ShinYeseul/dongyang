//비트 연산을 통해 문자의 대소문자 바꾸기

#include <stdio.h>
#include <string.h>

char *toggleCase(char *a){
    for(int i=0; a[i]!='\n';i++){
        a[i]^=32;
    }
    return a;
}

int main(){
    char str[]="CheRrY";

    printf("Toggle case: %s\n",toggleCase(str));
    printf("Original case: %s\n",toggleCase(str));
    return 0;
}