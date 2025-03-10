#include <stdio.h>
int fibb(int n);
int main(){
    int num;
    scanf("%d", &num);
    printf("%d", fibb(num));
    return 0;
}
int fib(int n){
    if (n=0){
        return 0;
    }
    else if (n=1){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}