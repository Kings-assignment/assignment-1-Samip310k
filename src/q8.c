/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */
#include <stdio.h>
int main(){

    float celsius, fahrenheit;
    printf("Enter the temperature:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("The fahrenheit is %.2f",fahrenheit);
    
    return 0;
}
