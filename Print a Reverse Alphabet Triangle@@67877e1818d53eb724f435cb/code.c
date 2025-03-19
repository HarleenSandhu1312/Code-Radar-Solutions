#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=a;i<=1;i--){
        char b;
        for(int j=1;j<=i;j++){
            printf("%c",b);
            b++;
        }
        printf("\n");
    }
    return 0;
}