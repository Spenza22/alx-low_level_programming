#include "main.h"
void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - .
 *  Return: Always 0.
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		
		char myAlp = 'a';
		for ( ; myAlp <= 'z'; myAlp++)
		{
			_putchar(myAlp);
		}
		_putchar('\n');

	}
}
