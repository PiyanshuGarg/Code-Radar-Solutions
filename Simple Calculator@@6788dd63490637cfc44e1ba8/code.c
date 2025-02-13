#include<stdio.h>
int main(){
    float a,b;
    char x;
    scanf("%f %f %c",&a ,&b ,&x);
    switch(x){
        case'+':
        printf("%d",a+b);
        break;
        case'-':
        printf("%d",a-b);
        break;
        case'*':
        printf("%d",a*b);
        break;
        case'/':
        printf("%d",a/b);
        break;
        default:
        printf("Error");
        break;
    }
    return 0;
}