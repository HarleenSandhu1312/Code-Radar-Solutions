#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=i;j>0;j--){
            // if(j<a){
            //     printf(" ");
            // }
            // else{
                printf("*");
            // }
        }
    printf("\n");
    }
    return 0;
}