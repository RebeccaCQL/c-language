#include <stdio.h>
//Write a program to sum all the integers between 1 and 1000
//that are divisible by 13, 15 or 17, but not by 30.
int main() {
    int sum;
    int number = 1;
    while (number <= 1000)
    {
        if ((number % 13 == 0) || (number % 15 == 0) || (number % 17 == 0) && (number % 30 != 0))
        {
            sum = sum + number;
        }
        ++number;
    }
    printf("the sum is %d.\n", sum);
    return 0;

}