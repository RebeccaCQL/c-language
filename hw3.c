#include <stdio.h>
int main() {
    printf("Enter 5 integer:");
    int integer1, integer2, integer3, integer4, integer5;
    scanf("%d%d%d%d%d", &integer1, &integer2, &integer3, &integer4, &integer5);
    int sum = integer1 + integer2 + integer3 + integer4 + integer5;
    printf("%d", sum);
    return 0;
}