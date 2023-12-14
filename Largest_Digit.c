#include<stdio.h>
int main(){
    int num,di,large=0;
    scanf("%d",&num);
    while(num>0)
    {
        di=num%10;
        if(di>large){
            large=di;
        }
        num=num/10;
    }
    printf("%d",large);
}