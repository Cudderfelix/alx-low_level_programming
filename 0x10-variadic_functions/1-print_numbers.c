#include <stdarg.h>
#include <stdio.h>

/**
 * print_num - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @b: start of input variables
 *
 * Return: nothing
*/

void print_num(const char *separator, const unsigned int b, ...)
{
	va_list ap;
	unsigned int index;

	/* initialize the argument list from the start */
	va_start(ap, b);

	/* iterate through each argument*/
	for (index = 0; index < b; index++)
	{
		/* print next argument */
		printf("%d", va_arg(ap, int));
		/* print separator only between arguments */
		if (separator && index != b - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
