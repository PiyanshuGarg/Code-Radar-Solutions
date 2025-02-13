#include<stdio.h>
int main(){
    double a,b;
    char x;
    scanf("%lf %lf %c",&a, &b, &x);
    switch(x){
        case '+':
        printf("%.lf", a+b);
        break;
        case '-':
        printf("%.lf", a-b);
        break;
        case '*':
        printf("%.lf", a*b);
        break;
        case '/':
        if(b!=0){
            printf("%.lf", a/b);}
        else{
            printf("Error");
        }
        break;
        default:
        printf("Error");
        break;
    }
    return 0;
}