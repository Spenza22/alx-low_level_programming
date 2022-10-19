#include "main.h"
void print_alphabet(void);


int main(void)
{
	print_alphabet();
	return (0);
}



/**
 * print_alphabet - check the code for ALX School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char myAlp = 'a';

	for ( ; myAlp <= 'z'; myAlp++)
	{
		_putchar (myAlp);

	}
	_putchar ('\n');

}
