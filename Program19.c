// Program to check whether a character is vowel or consonant using switch
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A': printf("Vowel");
        break;
        case 'E': printf("Vowel");
        break;
        case 'I': printf("Vowel");
        break;
        case 'O': printf("Vowel");
        break;
        case 'U': printf("Vowel");
        break;
        case 'a': printf("Vowel");
        break;
        case 'e': printf("Vowel");
        break;
        case 'i': printf("Vowel");
        break;
        case 'o': printf("Vowel");
        break;
        case 'u': printf("Vowel");
        break;
        default: printf("Consonant");
    }
    return 0;
}