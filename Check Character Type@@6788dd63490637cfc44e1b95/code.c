#include <stdio.h>

int main() {
    char abc;
    scanf("%c",&abc);
    if(abc>=a && abc<=z){
        if (abc==a|| abc==e||abc==i||abc==o||abc==u){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(abc>=0 && abc<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}