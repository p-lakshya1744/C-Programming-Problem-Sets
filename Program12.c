// Program to check whether a character is uppercase, lowercase, non-alphabetical symbol
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("The entered character is uppercase.");
    else if(ch>='a' && ch<='z')
    printf("The entered character is lowercase.");
    else 
    printf("The entered character is non-alphabetical.");
return 0;
}
