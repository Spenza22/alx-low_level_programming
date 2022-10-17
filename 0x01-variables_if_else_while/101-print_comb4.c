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
	int num2;

	for (num = 48; num <= 56; num++)
	{
		for (num1 = num + 1; num1 < 57; num1++)
		{
			for (num2 = num1 + 1; num2 < 58; num2++)
			{
				putchar(num);
				putchar(num1);
				putchar(num2);
				if (!(num == 55 && num1 == 56 && num2 == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
