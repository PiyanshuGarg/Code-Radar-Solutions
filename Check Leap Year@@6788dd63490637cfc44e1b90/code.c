#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((x%4) &&(x!=100) ||(x%400)){
        printf("Not a Leap Year");
    }
    else{
        printf("Leap Year");
    }
    return 0;
}