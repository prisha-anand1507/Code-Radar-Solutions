#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if ((a=b) && (b=c) && (a=c)){
        printf("Equilateral");
    }
    else if ((b!=c) && (a!=c) && (b!=a)){
        printf("Scalene");
    }
    else{
        printf("Isoscles");
    }
}