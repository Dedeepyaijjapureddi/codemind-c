#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        sum++;
    }
            printf("%d",sum);
        }
    
    