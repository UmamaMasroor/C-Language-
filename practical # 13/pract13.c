#include<stdio.h>
#include<conio.h>
void main (void)
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    if(n > 0){
        printf("number is positive ");}
        else if(n<0) {
            printf ("number is negative" ); }
            else {
                printf("Number is zero");
                }
                getch();
}