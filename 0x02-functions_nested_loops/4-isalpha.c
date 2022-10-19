#include "main.h"

/**
 *  _isalpha - Checks for alphabets.
 *  Return: Return 1 if alphabet, 0 if not.
 *@c: int parameter that takes char values
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		/* code */
		return (1);
	}
	else
	{
		return (0);
	}

}
