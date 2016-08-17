/**
 * 
 * This code prints out the mario pyramid based on the
 * height input from the user
 * 
*/
 
#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    // declare variable 
    int h;
    
    // ask for a user input for a positive integer =< 23
    do
    {
        printf("Please give me a positive integer for the pyramid height no more than 23: ");
        h = GetInt();
    }
    // repeat phrase when number entered is less than 0 and higher than 23
    while (h < 0 || h > 23);
    
    // loop to print each row
    for (int i = 0; i < h; i++)
    {
        // loop: print "spaces" with height - row number - 1
        for (int d = 0; d < h-i-1; d++)
            printf(" ");
        // loop: print "#" with row number + 2
        for (int d = 0; d < i+2; d++)
            printf("#");
        // print on next line
        printf("\n");
    }
}
