void bubbleSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j='a';j<'z';j++){
            if(arr[i]<arr[i+1]){
                char temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",&arr[i]);
    }
}
