#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 * The numbers 48, 56 and 58 in the for loops are the decimal equivalent
 * 0, 9, and 8
 */
int main(void)
{
	int num;
	int num1;

	for (num = 48; num <= 56; num++)
	{
		for (num1 = num + 1; num1 < 58; num1++)
		{
			putchar(num);
			putchar(num1);
			if (!(num == 56 && num1 == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
