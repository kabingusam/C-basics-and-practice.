#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
 * betty coding style used.
 * Return: 0 on success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    	if (n < 0)
    	{
        	printf("%d is a negative number\n", n);
    	}
    	if (n > 0)
    	{
    	    	printf("%d is a positive number\n", n);
   	 }
    	else 
    	{
      	    	printf("%d is zero\n", n);
    	}
}
