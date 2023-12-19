#include<stdio.h>
int main(){
    int n,i,so=0,se=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            so=so+a[i];
        }
        else
        {
            se=se+a[i];
        }
    }
    if(se>so)
    {
        printf("%d",se-so);
    }
    else
    {
        printf("%d",so-se);
    }
}