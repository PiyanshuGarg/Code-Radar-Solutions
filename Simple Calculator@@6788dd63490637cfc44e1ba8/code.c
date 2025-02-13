#include<stdio.h>
int main(){
    float a,b;
    char x;
    scanf("%f %f %c",&a,&b,&x);
    switch(x){
        case'+':
        printf("%f",a+b);
        break;
        case'-':
        printf("%f",a-b);
        break;
        case'*':
        printf("%f",a*b);
        break;
        case'/':
        printf("%f",a/b);
        break;
    }
    return 0;
}