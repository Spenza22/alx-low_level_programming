#include <stdio.h>
/**
 * main - This is the main entry point
 * Return: This will return 1
 */
int main(void)
{

	int alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar(10);
	return (0);

}
