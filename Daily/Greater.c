#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
 * n % value :gets the last digit of value.
 * %s :prints character array.
 * %d :prints integer value.
 * betty coding style used.
 * Return: 0 on success.
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
    if( n % 10 > 5)
    {
        printf("totaly greater than 5\n", n);
    }
    else if(n % 10 < 5)
    {
        printf("obviously less than 5\n", n);
    }
    if(n % 10 == 0)
    {
        printf("tottally zero bruuh!!\n", n);
    }

}