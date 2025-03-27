void insertionSort(int array[], int size){
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key; 
   }
}
void printArray(int arr[], int n){
   for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}