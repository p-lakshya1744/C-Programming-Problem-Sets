// Program to check whether a character is vowel or consonant, special symbol, a white space or digit
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'|| ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
    printf("The entered character is a vowel.");
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    printf("The entered character is a consonant."); 
    else if(ch<='9' && ch>='0')
    printf("The entered character is a digit.");
    else if(ch == '\n' || ch == '\t' || ch == ' ')
    printf("The entered character is a white space.");
    else
    printf("The entered character is a special symbol.");
return 0;
}