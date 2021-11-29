#include <stdio.h>
#include <cs50.h>

// Get Credit Card Number
void valid(void);

long credit;
int main(void)
{
    
    do
    {
    
        credit = get_long("Credit Card Number:");
    
    }
    while ((credit/1e12) < 1);
    
    valid();
    
    // Get first numbers
    int l = 2;
    do
    {
        credit = credit / 10;
        l++;
    }
    while (credit > 100);
    
    
    // Check AMEX
    if (credit == 34 || credit == 37) 
    {
        if (l == 15)
        {
        printf("AMEX\n");
        }
        else
        {
        printf("INVALID\n");
        }
        
    }
    // Check MASTERCARD
    else if (credit > 50 && credit < 56)
    {
        if (l == 16)
        {
        printf("MASTERCARD\n");
        }
        else
        {
        printf("INVALID\n");
        }
    }
    // Check VISA
    else if (credit/10 == 4)
    {
        if (l == 13 || l == 16)
        {
        printf("VISA\n");
        }
        else
        {
        printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

// Hans Petter Luhn Formula


int impar = 0;
int par = 0;
void valid(void)
{
    long number = credit;
    do
    {
        impar = impar + number % 10;
        number = number / 10;
        if  ((number % 10) > 5)
        {
            par = par + ((2 * (number % 10)) % 10) + 1;
            number = number / 10;
        }
        else 
        {
            par = par + (2 * (number % 10));
            number = number / 10;
        }
        
     
    }
    while (number > 0);
    
    if ((par + impar) % 10 == 0)
    {
        true;
    }
    else
    {
        printf("INVALID\n");
    }
}
    