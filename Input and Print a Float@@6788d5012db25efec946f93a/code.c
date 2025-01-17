#include <stdio.h>

char* welcome() {
    int n;
    printf("write a number:\n");
    scanf("%d",&n);
}

int main() {
    printf("You entered: %s", welcome());
    return 0;
}