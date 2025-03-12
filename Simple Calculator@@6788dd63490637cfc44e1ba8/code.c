#include <stdio.h>

int main() {
    int a,b,d,e,f,g;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if(c=='+'){
        d=a+b;
        printf("%d",d);
    }
    else if (c=='-'){
        e=a-b;
        printf("%d",e);
    }
    else if(c=='*'){
        f=a*b;
        printf("%d",f);
    }
    else if(c=='/'){
        g=a/b;
        printf("%d",g);
    }
    return 0;
}