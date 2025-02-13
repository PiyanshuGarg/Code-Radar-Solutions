#include<stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d %d %c",&a,&b,&x);
    switch(x){
        case'+':
        printf("%.2f",a+b);
        break;
        case'-':
        printf("%f",a-b);
        break;
        case'*':
        printf("%f",a*b);
        break;
        case'/':
        printf("%",a/b);
        break;
        default:
        printf("Error");
        break;
    }
    return 0;
}