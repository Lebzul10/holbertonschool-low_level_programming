#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 if(n > 0)
   {
     echo("$(n) is positive");
   }
 else if(n < 0)
   {
     echo("$(n) is negative");
   }
 else
   {
     echo("$(n) is zero");
   }
return(0);
}
