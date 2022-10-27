#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: Takes a char
 * Return: Void function
 */

void print_rev(char *s)
{
	int i;
	int o = 0;
	int p;
	int revLen;

	for (i = 0; s[i] != '\0'; i++)
	{
		o++;
	}
	for (p = o - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
