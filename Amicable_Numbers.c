#include <stdio.h>
int sum_divisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum1 = sum_divisors(num1);
    int sum2 = sum_divisors(num2);
    
    if (sum1 == num2 && sum2 == num1) {
        printf("Amicable");
    } else {
        printf("Not Amicable");
    }
    
    return 0;
}