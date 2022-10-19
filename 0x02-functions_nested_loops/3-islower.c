#include "main.h"

/**
 * _islower - Checks for lowercase characters.
 * Return: Always 0.
 *@c : accepts a char charcter
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		/* code */
		return (1);
	}
	else
	{
		return (0);
	}

}
