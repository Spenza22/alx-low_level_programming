#include "main.h"
/**
 * swap_int - swaps the values of 2 ints to pointer values
 * @a: first int to pointer
 * @b: second int to pointer
 * Return: a void value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
