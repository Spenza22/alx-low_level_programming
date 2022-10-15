#include <stdio.h>

/**
 * main - This is the main Entry point
 * Return: The main function returns zero
 */
int main(void)
{
	int Ualpha = 97;
	int alpha = 48;

	while (alpha <= 57)
	{
		putchar(alpha);
		alpha++;
	}

	while (Ualpha <= 102)
	{
		putchar(Ualpha);
		Ualpha++;
	}
	putchar(10);
	return (0);
}
