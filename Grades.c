#include<stdio.h>
int main(){
    float eng, phy, chem, math, comp; 
    float total, average, per;
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    per = (total / 500.0) * 100;
    if(per>=90 )
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else if(per<40)
    {
        printf("Grade F");
    }
}
		

