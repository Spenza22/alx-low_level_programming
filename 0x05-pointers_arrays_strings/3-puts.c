#include "main.h"
/**
 * _puts - Prints the characters in a string
 * @str: Accepts a single character
 * Return: A void function
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
