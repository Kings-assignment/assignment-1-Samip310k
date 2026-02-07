//#include Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include <stdio.h>
int main(){
    float length, width;
    int area;
    printf("enter the length and width:");
    scanf("%f %f",&length, &width);
    area=length*width;
    printf("the area od the rectangle is %d\n",area);
    return 0;
}