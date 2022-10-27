#include "main.h"

/**
 * puts2 - Prints every other character in a string
 * @str: Accepts a char pointer
 * Return: A void function
 */

void puts2(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
