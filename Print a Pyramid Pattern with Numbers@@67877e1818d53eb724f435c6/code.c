// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        int b=1;
        for(int j=1;j<=(2*a-1);j++){
                if(i%2!=0 && j%2!=0){
                    printf("%d",b);
                    b++;
                }
                elseif(i%2==0 && j&2==0){
                    printf("%d",b);
                    b++;
                }
                else{
                    printf(" ");
                }
            }
        
        printf("\n");
    }
    return 0;
}