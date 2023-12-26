#include<stdio.h>
int main(){
    int h,m,x,y,z;
    scanf("%d%d",&h,&m);
    x=24-h;
    y=60-m;
    z=x*60+y;
    printf("%d",z-60);
}