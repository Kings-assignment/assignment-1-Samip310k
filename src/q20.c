// Write an expression that checks if a number is a multiple of either 3 or 5.
#include <stdio.h>
int main(){

    int num;
    int result;
    printf("Enter a number:");
    scanf("%d",&num);
    result=(num%3==0)||(num%5==0);
    printf("The result is %d",result);
    
    return 0;

}
