// Write an expression that checks if a number is both positive and even.
#include <stdio.h>
int main(){
    
    int num;
    int check;
    printf("Enter a number:");
    scanf("%d",&num);
    check=(num>0)&&(num%2==0);
    printf("The result is %d\n",check);

    return 0;
}
