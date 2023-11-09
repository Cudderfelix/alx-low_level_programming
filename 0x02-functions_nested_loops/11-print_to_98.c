#include"main.h"

/**
 * print_to_98 - print q to 98 counts
 * seperate the int with a comma,
 *	then a space and it should be
 *	printed in order
 *@q: input
*/

void print_to_98(int q)
{
	int count;

	if (q > 98)
	for (count = q; count > 98; --count)
		printf("%d, ", count);
	else
	for (count = q; count < 98; ++count)
		printf("%d, ", count);
	printf("98\n");
}
