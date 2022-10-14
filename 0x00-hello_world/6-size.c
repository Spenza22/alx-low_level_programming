#include <stdio.h>
/**
 *main - The main function using the sizeof tool
 *Return: This will retrun zero as is an int
 */
int main(void)
{
char cha;
int numb;
long int Numb;
long long int Long;
float floatPnt;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(cha));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(numb));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(Numb));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(Long));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(floatPnt));
return (0);
}
