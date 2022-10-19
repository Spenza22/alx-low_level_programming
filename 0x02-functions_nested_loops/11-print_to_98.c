#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all numbers down to 98
 * Return: No return value
 * @n: Accepts integer values
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		for ( ; i <= 98; i++)
		{
			/* code */
			printf("%d", i);
			if (i == 98)
			{
				/* code */
				continue;
			}
			else
				printf(", ");
		}
	}
	else
	{
		for ( ; i >= 98; i--)
		{
			/* code */
			printf("%d", i);
			if (i == 98)
			{
				/* code */
				continue;
			}
			else
				printf(", ");
		}
	}
	printf("\n");
}
