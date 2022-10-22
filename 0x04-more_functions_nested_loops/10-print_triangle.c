#include "main.h"
/**
 * print_triangle - prints the sahpe of a triangle
 * @size: int variable used for test
 * Return: void value
 */

void print_triangle(int size)
{
	int i, spa;

	if (size <= 0)
	{
		/* code */
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			/* code */
			for (spa = i; spa < size; spa++)
			{
				/* print space */
				_putchar(' ');
			}
			for (spa = 1; spa <= i; spa++)
			{
				/* print the hastag */
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
