#include <stdio.h>
#include <math.h>
int main() {
    float a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%d",sum(a,b));
        break;

    }
    return 0;
}