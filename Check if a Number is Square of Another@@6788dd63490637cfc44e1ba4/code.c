#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d %d",&a,&b);
    if(a==b*b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}