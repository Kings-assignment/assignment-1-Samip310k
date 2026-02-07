// Write a C expression that evaluates whether a number is divisible by both 2 and 3 (without using the modulus operator).
#include <stdio.h>
int main(){
    
    int num;
    int result;
    printf("Enter a number:");
    scanf("%d",&num);
    result=(num/2*2 == num) && (num/3*3 == num);
    printf("The result is %d\n",result);

    return 0;
}
