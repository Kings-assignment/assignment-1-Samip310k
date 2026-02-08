// Given a variable num, write an expression that checks if it is a power of 2.
// You can you math header file for this (eg: #include <math.h>)
#include <stdio.h>

int main(){
    int num;
    printf("enter the number:");
    scanf( "%d", &num);

    int result;
    result=!(num&(num-1));
    printf("the result is %d\n",result);
    return 0;
}