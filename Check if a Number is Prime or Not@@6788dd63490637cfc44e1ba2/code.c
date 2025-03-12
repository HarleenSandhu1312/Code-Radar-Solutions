#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        count=0;
    if(a%i==0){
        count++;
    }
    else{
        continue;
    }

    }
    if (count==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}