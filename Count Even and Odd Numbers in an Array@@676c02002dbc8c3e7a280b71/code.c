#include <stdio.h>

int evenodd(int arr[], int n,even,odd){
    int even=0,odd=0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            return even=even+1;
        }
        else{
            return odd=odd+1;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    evenodd(arr,n,even,odd);
    printf("%d %d", even,odd);
}