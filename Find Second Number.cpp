#include <stdio.h>

int main() {
    int X, Y, second;

    // Read average and first number
    scanf("%d %d", &X, &Y);

    // Calculate second number
    second = 2 * X - Y;

    // Print the second number
    printf("%d", second);

    return 0;
}
