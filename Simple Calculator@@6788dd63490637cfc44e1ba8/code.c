#include <stdio.h>

int main() {
    float a,b;
    char c;
    scanf("%.2f %.2f %c",&a,&b,&c);
    switch(c){
        case '+':
        printf("%.2f",a+b);
        break;

    }
    return 0;
}