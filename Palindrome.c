#include <stdio.h>
int main() {
  int n,re=0,r,o;
    scanf("%d", &n);
    o=n;
    while (n != 0) {
        r=n % 10;
        re=re*10+r;
        n /=10;
    }
    if (o==re)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}