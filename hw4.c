#include <stdio.h>
int main() {
    double length, width, area, perimeter;
    printf("Enter the length:");
    scanf("%lf", &length);
    printf("Enter the width:");
    scanf("%lf", &width);
    area = width * length;
    perimeter = 2 * (width + length);
    printf("the are is %lf.\n", area);
    printf("the perimeter is %lf.\n", perimeter);
    return 0;
}