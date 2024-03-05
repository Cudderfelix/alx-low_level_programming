#include "main.h"
#include <stdio.h>
/** 
 * print_binary(unsigned long int n)
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temperary;
	int shiftun;

	if (n == 0)
	{
		printf("0")
		return;
	}

	for (temperary = n, shiftun = 0; (temp >>= 1) > 0; shiftun++);

	for (; shiftun >=0; shiftun--)
	{
		if ((n  >> shiftun) & 1)
			printf("1");
		else
			printf("0");
	}
}
