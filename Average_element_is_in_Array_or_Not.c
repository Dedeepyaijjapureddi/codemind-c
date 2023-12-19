#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg==i)
        {
            printf("True");
            break;
        }
        if(i==n-1)
        {
            printf("False");
        }
    }
}