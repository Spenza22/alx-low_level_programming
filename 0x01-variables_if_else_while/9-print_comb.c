#include <stdio.h>
/**
 * main - This is the main Entry point
 * Return: The main function returns zero
 */
int main(void)
{
	int space = 32;
	int comma = 44;
	int alpha = 48;

	while (alpha <= 57)
	{
		putchar(alpha);
		if (alpha == 57)
		{
			break;
		}
		putchar(comma);
		putchar(space);
		alpha++;
	}
	putchar(10);
	return (0);
}
