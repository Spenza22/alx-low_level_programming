#include "main.h"
/**
 * print_most_numbers - print all but 2 single digit numbers
 * Return: void function
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		/* code */
		if (i == 50 || i == 52)
		{
			/* code */
			continue;
		}
		else
			_putchar(i);
	}
	_putchar('\n');
}
