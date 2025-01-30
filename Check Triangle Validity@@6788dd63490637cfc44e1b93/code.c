#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x+y>z && y+z>x && x+z>y){
        printf("Valid");
    }
    else{
        printf("Not Valid");
    }
    return 0;
}