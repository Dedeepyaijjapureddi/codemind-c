#include<stdio.h>
int main()
{
    int x,n;
    scanf("%d",&x);
    n=x/4;
    if(x%4!=0)
    {
        printf("%d",n+1);
    }
    else
    {
        printf("%d",n);
    }
    
}