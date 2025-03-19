#include <stdio.h>
int main(){
    int n,arr[n];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    printf("%d %d", even,odd);
}
}