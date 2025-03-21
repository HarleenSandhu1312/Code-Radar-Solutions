// Your code here...
#include<stdio.h>
int main(){
    int a,b=1;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        
        for(int j=a;j>1;j--){
            if(i==j){
                printf("%d",b);
            }
            else{
                printf(" ");
            }
            b++;
        }
        for(int k=1;k<=i;k++){
            if(i==k){
                printf("%d",k);
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}