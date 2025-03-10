#include <stdio.h>
int fibonacciSeries(int n);

int fibonacciSeries(int n){
    if (n=1){
        printf("%d", n);
        return 0;
    }
    else if (n=2){
        printf("%d", n);
        return 1;
    }
    else{
        int result =  fibonacciSeries(n-2) + fibonacciSeries(n-3);
        printf("%d", result);
        return result;
    }
}