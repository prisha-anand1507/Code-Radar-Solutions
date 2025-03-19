// Your code here...
int arr1(int arr[],int arrnew[], int n){
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return i;
            }
    }
    return -1;
}
int main(){
    int num,arr[num];
    scanf("%d", &num);
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int peakindex= arr1(arr,num);
    if peakindex==1{
        printf("%d", arr[peakindex]);
    }
    else{
        printf("-1");
    }
}