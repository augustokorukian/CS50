#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Get value from user
    float change;
    do  
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);
    
    //Transform into integer
    int value = round(change * 100);
     
    // Calculate
    int count = 0;
        
    do  
    {
        if (value >= 25)
        {
            count = count + value / 25;
            value = value % 25;
        }
        else if (value >= 10)
        {
            count = count + value / 10;
            value = value % 10;
        }
        else if (value >= 5)
        {
            count = count + value / 5;
            value = value % 5;
        }
        else
        {
            count =  count + value / 1;
            value = 0;
        }
    }
    while (value > 0);
    
    
    printf("%i Coins\n", count);

     
}

