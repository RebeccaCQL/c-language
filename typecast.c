#include <stdio.h>
//Write a program called HarmonicSeriesSum to compute the sum of 
//a harmonic series 1 + 1/2 + 1/3 + 1/4 + .... + 1/n, where n = 1000. 
//Your program shall prompt user for the value of n. 
//Keep the sum in a double variable, and take note that 1/2 gives 0 
//but 1.0/2 gives 0.5.
//Try computing the sum for n=1000, 5000, 10000, 50000, 100000.
int main() {
    int maxdenominator;
    int denominator = 1;
    double sum, number = 1.0;
    printf("Enter the max denominator:");
    scanf("%d", &maxdenominator);
    while (denominator <= maxdenominator)
    {
        sum = sum + number/denominator;
        ++denominator;
    }
    printf("The sum is %lf.\n", sum);
    return 0;

}