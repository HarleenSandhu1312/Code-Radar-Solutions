#include <stdio.h>

int main() {
    char abc;
    scanf("%c",&abc);
    if(abc>=a && abc<=z){
        printf("Lowercase");
    }
    else if(abc>=A && abc<=Z){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet")
    }
    return 0;
}