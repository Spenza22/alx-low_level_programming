#include <stdio.h>
/**
 * main - This is the main Entry point
 * Return: The main function returns zero
 */
int main(void)
{
	/* int Ualpha = 97;*/
	int space = 32;
	int comma = 44;
	int alpha = 48;
	/* newline == 10 || null == */
	while (alpha <= 57)
	{
		if (alpha == 57)
		{
			comma = 0;
			space = 0;
		}
		putchar(alpha);
		putchar(comma);
		putchar(space);
		alpha++;
	}
	putchar(10);
	return (0);
}
