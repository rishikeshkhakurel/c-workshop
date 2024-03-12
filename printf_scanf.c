#include <stdio.h>

int main() {
    int number1, number2, sum;
    printf("Enter First Number\n");
    scanf("%d", &number1);
    printf("Enter Second Number\n");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("Sum of %d & %d is %d", number1, number2, sum);
    return 0;
}

