// Your code here...
#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for(int j=1;j<=(2a-1);j++){
            if(i==j){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
    return 0;
}