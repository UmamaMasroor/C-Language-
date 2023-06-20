#include<stdio.h>

int main(void)
{
    char ch;
    printf("Enter a letter: ");
    ch = getchar();
    printf("\n");
    
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The letter you typed is a vowel");
            break;
        default:
            printf("The letter you typed is a consonant");
    }
    
    return 0;
}
