#include "main.h"
void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - Print all the alphabets in lower cases 10x
 *  Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for ( ; i <= 9; i++)
	{
		char myAlp = 'a';

		for ( ; myAlp <= 'z'; myAlp++)
		{
			_putchar(myAlp);
		}
		_putchar('\n');

	}
}
