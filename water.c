/**
*
*This code allows the user to see how many waterbottles he/she uses
*during his/her shower.
*
*/
 
#include <cs50.h>
#include <stdio.h>
 
int main(void)
{
    // get user input on length of shower
    printf("How many minutes do you shower for? ");
    int m = GetInt();
    
    // determine how long the person showers
    if (m > 0)
    {
        printf("Minutes: %i\n", m);
    }
    else if (m < 0)
    {
        printf("invaid answer\n");
    }
    else
    {
        printf("You don't shower!\n");
    }
    
    // computes how many bottles the user uses during the shower
    int b = (m*12);
    printf("Bottles: %i\n", b);
}
