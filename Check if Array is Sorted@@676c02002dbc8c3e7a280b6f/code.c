// Your code here..
#include<stdio.h>
int main(){
    int a,arr[20];
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",arr[i]);
    }
    if(a==len(arr)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}