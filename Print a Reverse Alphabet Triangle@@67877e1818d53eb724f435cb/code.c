#include <stdio.h>

int main(){
    int a;
    char ch= 'A';
    scanf("%d", &a);
    for (int i=1; i<=a;i++){
        for (int j=a;j>=i;j--){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        ch='A';
    }
}