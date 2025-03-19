#include <stdio.h>

void minmax(int arr[], int n){
    int temp;
    for (int i=0;i<n;i++){
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    minmax(arr,n);
    printf("%d %d", arr[1]);
}