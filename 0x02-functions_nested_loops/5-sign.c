#include "main.h"

/**
 * print_sign - Prints a sign depending on the value
 * Return: Value depending on the number
 * @n: The integer that is retrieved
 */

int print_sign(int n)
{
	int intVal;

	if (n < 0)
	{
		intVal = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		intVal = 0;
		_putchar('0');
	}
	else
	{
		intVal = 1;
		_putchar('+');
	}
	return (intVal);
}
