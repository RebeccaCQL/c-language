#include <stdio.h>
int main() {
    int lowerbound, upperbound, sum;
    int number = lowerbound;
    printf("Enter the lowerbound and upperbound(seperated by space:)");
    scanf("%d%d", &lowerbound, &upperbound);
    while (number <= upperbound)
    {
        sum = sum + number;
        ++number;
    }
    printf("The sum from %d to %d is %d.\n", lowerbound, upperbound, sum);
    return 0;
}