#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    
    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.", fahrenheit, celsius);
    
    return 0;
}
