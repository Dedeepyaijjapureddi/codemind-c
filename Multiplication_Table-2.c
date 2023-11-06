#include<stdio.h>
int main(){
    int i,n,num;
    scanf("%d %d",&n,&num);
    for(i=1;i<=num;i++)
    printf("%d x %d = %d
",n,i,(n*i));
}