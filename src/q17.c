// Create an expression that checks if a given character is an uppercase letter.
#include <stdio.h>
int main(){
    
    char c;
    int result;
    printf("Enter a character:");
    scanf("%c",&c);
    result=(c>='A')&&(c<='Z');
    printf("The result is %d",result);

    return 0;
}
