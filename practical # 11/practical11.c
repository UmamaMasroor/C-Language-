#include <stdio.h>

int main()
{
    int cost;
    printf("Enter the cost of the item: ");
    scanf("%d", &cost);
    
    if (cost > 4000)
    {
        printf("Special tax is added.\n");
    }
    else
    {
        printf("No special tax is added.\n");
    }
    
    return 0;
}

