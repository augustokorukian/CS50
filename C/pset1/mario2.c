#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // Get Height from user
    int n;
    do
    {

        n = get_int("Height: ");

    }
    while (n < 1 || n > 8);

    // Draw Pyramid
    int i;
    int j;

    for (j = 1; j <= n; j++)
    {

        for (i = 8; i > j; i--)
        {
            printf(" ");
        }
        
        
        for (i = 1; i <= j; i++)
        {
            printf("#");
        }
        
        printf("  ");
        
         for (i = 1; i <= j; i++)
        {
            printf("#");
        }
    
        printf("\n");
    }
}
