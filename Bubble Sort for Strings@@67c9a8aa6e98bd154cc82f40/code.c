bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j='a';j<='z';j++){
            if(arr[i][j]>arr[i+1][j]){
                int temp=arr[i][j];
                arr[i][j]=arr[i+1][j];
                arr[i+1][j]=temp;
            }
        }
    }
}
printArray(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%s",arr[n]);
    }
    printf("\n");
}