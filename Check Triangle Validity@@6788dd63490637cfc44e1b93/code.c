#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if((y==x+1 && z==y+1)){
        printf("Valid");
    }
    else{
        printf("Not Valid");
    }
    return 0;
}