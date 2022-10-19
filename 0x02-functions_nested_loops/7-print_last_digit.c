#include "main.h"
#include "_putchar.c"
/**
 * print_last_digit - Function to print last digit of a number
 * Return: Returns asn int value
 * @num: Integer value to work with
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

int print_last_digit(int num)
{
	int ld;

	ld = (num % 10) + '0';
	_putchar(ld);
	return (num % 10);
}
