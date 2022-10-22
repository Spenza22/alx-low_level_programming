#include "main.h"
/**
 * print_diagonal - prints a slanted line
 * @size: year
 * Return: void
 */

void print_diagonal(int size)
{
	int i, spa;

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
			for (spa = 0; spa < i; spa++)
			{
				/* code */
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
