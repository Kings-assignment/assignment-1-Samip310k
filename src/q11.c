// Write a C expression that performs the following operations in a single line: increment a variable by 1, multiply it by 3, and subtract 10.
#include <stdio.h>

int main()
 {
    int a;
    int result;
    printf("Enter a number:");
    scanf("%d",&a);
    result=(a++,a*3-10);
    printf("The result is %d\n",result);
    return 0;
}
