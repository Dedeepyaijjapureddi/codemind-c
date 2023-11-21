#include<stdio.h>
int main(){
    int a,b,x,y;
    scanf("%d%d%d",&x,&a,&b);
    y=a+b*2;
    if(y>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}