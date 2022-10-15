#include <stdio.h>

/**
 *main - Main entry point
 *Return: Returns zero
 */
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar(10);
	return (0);
}
