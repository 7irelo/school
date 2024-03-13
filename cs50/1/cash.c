#include <cs50.h>
#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Amount Owed: ");
    }
    while (cents < 1);

    int quarters = 0;
    while (cents > 25)
    {
        quarters++;
        cents -= 25;
    }

    int dimes = 0;
    while (cents > 10)
    {
        dimes++;
        cents -= 10;
    }
    
    int nickels = 0;
    while (cents > 5)
    {
        nickels++;
        cents -= 5;
    }
    printf("%i\n", quarters + dimes + nickels + cents);
}