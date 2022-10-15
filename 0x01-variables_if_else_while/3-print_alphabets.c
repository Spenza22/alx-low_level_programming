#include <stdio.h>


/**
 * main - This is the main Entry point
 * Return: The main function returns zero
 */
int main(void)
{
	int Ualpha = 65;
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}

	while (Ualpha <= 90)
	{
		putchar(Ualpha);
		Ualpha++;
	}
	putchar(10);
	return (0);
}
