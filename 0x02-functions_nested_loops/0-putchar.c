#include"main.h"

/**
 * C Programming - Function and Nested Loops
 *
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ah;

	for (ah = 0; ah < 7; ++ah)
		_putchar(str[ah]);
	_putchar('\n');

	return (0);
}
