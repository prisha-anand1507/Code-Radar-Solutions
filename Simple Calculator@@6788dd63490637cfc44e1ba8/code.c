#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    char sign;
    scanf("%d %d %c", &a, &b, &sign);
    switch (sign){
        case '+':
        printf("%d", a+b );
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        printf("%d", a/b);
        break;
        default:
        printf("error");
    }
}