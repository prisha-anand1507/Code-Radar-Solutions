// Your code here...
void selectionSort(int arr[], int n);
printArray(int arr[], int n);
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}
printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}