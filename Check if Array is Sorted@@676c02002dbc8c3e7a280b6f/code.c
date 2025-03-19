// Your code here...
#include <stdio.h>
int is_sorted(int arr[], int n){
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    int arr[num];
    scanf("%d", &num);
    for (int i=0;i<num;i++){
        scanf("%d", &arr[i]);
    }
if (is_sorted(arr,num)){
    printf("Sorted");
}
else{
    printf("Not Sorted");
}
}