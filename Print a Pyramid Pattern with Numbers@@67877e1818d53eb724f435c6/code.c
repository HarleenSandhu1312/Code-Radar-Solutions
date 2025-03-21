// Your code here...
#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for(int j=a;j>1;j--){
            if(i==j){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
            
        }
        for(int k=1;k<=i;k++){
            if(k%2==0){
                b++;
                printf("%d",b);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}