#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a;
    char b;
    float c;
    char d[7];

    printf("Enter Character Value:");
    scanf("%c", &b);
    printf("Enter Integer Value:");
    scanf("%d", &a);
    printf("Enter Float Value:");
    scanf("%f", &c);
    printf("Enter String Value:");
    scanf("%s", d);

    printf("\n\n\t\tValue of Integer, Character, Float, and String");
    printf("\n\t\t===============================================");
    printf("\n Character Value is: %c", b);
    printf("\n Integer Value is: %d", a);
    printf("\n Floating Point Value is: %f", c);
    printf("\n String Value is: %s", d);

    return 0;
}
