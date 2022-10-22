#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		/* code */
		if (i % 15 == 0)
		{
			/* code */
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", i);


	}
	printf("\n");
	return (0);
}
