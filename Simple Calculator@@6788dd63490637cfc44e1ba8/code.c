#include<stdio.h>
int main(){
    double a,b;
    char x;
    scanf("%lf %lf %c",&a, &b, &x);
    switch(x){
        case '+':
        printf("%.1lf", a+b);
        break;
        case '-':
        printf("%.1lf", a-b);
        break;
        case '*':
        printf("%.1lf", a*b);
        break;
        case '/':
        printf("%.1lf", a/b);
        break;
        default:
        printf("Error");
        break;
    }
    return 0;
}