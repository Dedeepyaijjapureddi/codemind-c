#include<stdio.h>
int main(){
    int cost,sold;
    float pro,pro_per;
    scanf("%d%d",&cost,&sold);
    pro=sold-cost;
    pro_per=((pro*100)/cost);
    printf("%.2f
",pro_per);
}