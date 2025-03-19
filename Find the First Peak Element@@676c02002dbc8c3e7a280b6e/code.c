// Your code here...
int arr1(int arr[],int arrnew[], int n){
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            arrnew[]=arr[i];
            }
    }
}
int main(){
    int num,user;
    scanf("%d", &num);
    int arr[num];
    for (int i=0;i<num;i++){
        scanf("%d",&user);
        arr[num]=user;
    }
    printf("%d", arrnew[0]);
}