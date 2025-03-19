#include <stdio.h>

int main(){
    int n,second_largest= -1;
    scanf("%d", &n);
    int arr[n];
    int temp;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if(n>=2){
    for (int i=0;i<n;i++){
        for (int j=0; j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
          
        }
    second_largest=arr[n-2];
    }}
   
    printf("%d", second_largest);
}