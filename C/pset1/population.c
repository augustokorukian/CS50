#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get initial number of llamas (>=9)
    
    int I;
    do
    {
        
        I = get_int("Start Size: ");
    
    }
    while (I < 9);
    
    // Get final number of llamas (>initial)
    
    int F;
    do
    {
        
        F = get_int("Final Size: ");
    
        
    }
    while (F < I);
    
    // Show number of years

    int n = 0;
    while (I < F)
    {
        I = I + I / 3 - I / 4;
        n++;

    }
    
    printf("Years: %i\n", n);
    
}