#include <stdio.h>
int main() {
    int number1, number2, number3, sum, product;
    printf("\033[1;32mEnter the number(seperated by space):\033[0m");
    scanf("%d%d%d", &number1, &number2, &number3);
    sum = number1 + number2 + number3;
    product = number1 * number2 * number3;
    printf("the sum is %d, the product is %d.\n", sum, product);
    return 0;
}