#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: The string pointer
 * Return: Returns an int value
 */

int _strlen(char *s)
{
	int i;
	int a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		a++;
	}
	return (a);
}
