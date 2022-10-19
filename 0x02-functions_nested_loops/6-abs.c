#include "main.h"

/**
 * _abs - This function computes the absolute value of a number
 * Return: Returns the absolute value
 * @n: Accepts integer values
 */

int _abs(int n)
{
	int absVal;

	if (n < 0)
	{
		absVal = n * -1;
	}
	else
		absVal = n;
	return (absVal);
}
