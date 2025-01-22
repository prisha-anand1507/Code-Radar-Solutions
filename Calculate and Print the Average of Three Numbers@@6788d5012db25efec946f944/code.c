#include <stdio.h>

int main(){
    int a,b,c;
    float d= a+b+c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Average: %.2f", d/3);
    return 0;
}