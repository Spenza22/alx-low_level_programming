#include <stdio.h>
#include "main.h"

/**
*print_to_98 - This functions prints digits from
*the entry point up to 98
*Return: No return value
*@n: This parameter accepts integer values
*/
void print_to_98(int n)
{
	int i = n;

	for ( ; i <= 98; i++)
	{
		/* code */
		printf("%d", i);
		if (i == 98)
		{
			/* code */
			continue;
		}
		else
			printf(", ");
	}
	printf("\n");


}
