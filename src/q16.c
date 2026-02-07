// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>
int main (){
    
    int x,y;
    int average;
    printf("Enter two variables:");
    scanf("%d %d",&x,&y);
    average=(x+y)/2;
    printf("The average between the two variables is %d\n",average);

    return 0;
}
