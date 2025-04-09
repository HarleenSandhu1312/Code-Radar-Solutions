int bubbleSort(char arr[][],int n){
    for(int i=0;i<n-1;i++){
        for(char j='a';j<='z';j++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int printArray(char arr[][],int n){
    for(int i=0;i<n;i++){
    printf("%s",arr[n]);
    }
    printf("\n");
}