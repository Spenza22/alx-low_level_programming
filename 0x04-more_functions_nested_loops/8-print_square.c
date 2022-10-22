#include "main.h"
/**
 * print_square - prints '#' a number of times
 * @size: int variable used for test
 * Return: void function
 */

void print_square(int size)
{
	int i, a;

	if (size <= 0)
	{
		/* code */
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			/* code */
			for (a = 0; a < size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
