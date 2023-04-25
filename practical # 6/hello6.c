#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float area, pi = 3.142;
    float base, height, r, a, v;

    printf("\n Enter the value for base of a triangle");
    scanf("%f", &base);

    printf("\n Enter the height of a triangle");
    scanf("%f", &height);

    printf("\n Enter the radius of a circle");
    scanf("%f", &r);

    area = 1.0/2 * base * height;
    printf("\n the area of triangle is %f \n", area);

    a = pi * pow(r, 2);
    printf("\n the area of circle is %f \n", a);

    v = 4.0/3 * pi * pow(r, 3);
    printf("\n the volume of sphere is %f \n", v);

    getch();
    return 0;
}

