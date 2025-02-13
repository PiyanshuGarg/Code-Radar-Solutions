#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d %d",&a,&b);
    a=a*a;
    b=a%b==0;
    if(a==b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}