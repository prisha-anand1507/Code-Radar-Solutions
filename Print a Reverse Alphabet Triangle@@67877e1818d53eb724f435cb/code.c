#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for (int i=0; i<=a;i++){
        for (int j=a;j>=i;j--){
            printf("%c ", 'A'+j-1);
        }
        printf("\n");
    }
}