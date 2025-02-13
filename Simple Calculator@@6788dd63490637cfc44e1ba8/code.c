#include<stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d %d %c",&a, &b, &x);
    switch(x){
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '*':
        printf("%d", a*b);
        break;
        case '/':
        printf("%d", a/b);
        break;
        default:
        printf("Error");
        break;
    }
    return 0;
}