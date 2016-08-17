/**
 * 
 * Depending on the user input, the code gives back the change with 
 * the least number of coins
 * 
*/
 
#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main(void)
{
    // declare float variable
    float change;
 
    // get input from user
    // if input is less than zero, keep asking until it gets the right answer
    do
    {
        printf("How much change do I owe you? ");
        change = GetFloat();
    }
    while (change < 0);
    
    // since input is in dollar amount, multiply by 100 to get cents
    change = change * 100; 
    // round the float "change"
    change = roundf(change);
    
    // evolve float "change" into integer "change"
    int change2 = (int) change;
    // set counter variable for the number of coins
    int counter = 0;
    
    // quarters: while change is bigger or equal to 25c
    while(change2 >= 25)
    {
        // decrease change owed by 25c
        change2 = change2 - 25; 
        // increase number of coins used by 1
        counter = counter + 1;
    }
    // dimes: while change is bigger or equal to 10c
    while(change2 >= 10)
    {
        // decrease change owed by 10c
        change2 = change2 - 10;
        // increase number of coins used by 1
        counter = counter + 1;
    }
    // nickels: while change is bigger or equal to 5c
    while(change2 >= 5)
    {
        // decrease change owed by 5c
        change2 = change2 - 5;
        // increase number of coins used by 1
        counter = counter +1;
    }
    // pennies: while change is bigger or equal to 1c
    while(change2 >= 1)
    {
        // decrease change owed by 1c
        change2 = change2 - 1;
        // increase number of coins used by 1
        counter = counter + 1;
    }
    // print the number of coins used on the next line
    printf("%d\n", counter);
}
