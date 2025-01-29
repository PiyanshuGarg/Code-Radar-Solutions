#include <stdio.h>
int main(){
    int a,result;
    scanf("%d",&a);
    if((~a==1) || (~a==0)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}