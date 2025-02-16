#include <stdio.h>
int main(){
    int a,b,n,l;
    scanf("%d %d", &a, &b);
    n=a>>b;
    l=n&1;
    printf("%d", l);

}