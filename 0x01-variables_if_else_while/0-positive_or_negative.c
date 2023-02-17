#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determins if a number is negative or positive oe Zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 2)
	{
		printf("%d is Positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is Negative\n", n)
	}
	return (0);
}
