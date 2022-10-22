#include "main.h"
/**
 * print_line - prints a line a number of times
 * @n: int variable for test
 * Return: void function
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		/* code */
		_putchar('\n');
	}
	else
	{
		while (i != n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
