#include "main.h"

/**
 * rev_string - Prints a string in reverse order
 * @s: Takes a char
 * Return: Void function
 */

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

void rev_string(char *s)
{
	int i;
	int o = 0;
	int p;

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
