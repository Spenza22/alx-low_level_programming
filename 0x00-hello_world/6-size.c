#include <stdio.h>
/**
 *main - The main function using the sizeof tool
 *Return: This will retrun zero as is an int
 */
int main(void)
{
	char cha;
	int numb;
	long int longNum;
	long long quiteLong;
	float floatPnt;

	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(cha));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(numb));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(longNum));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(quiteLong));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(floatPnt));
	return (0);
}
