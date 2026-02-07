// Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);

    printf("Before swapping:");
    printf("a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;
    
    printf("After swapping:");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
