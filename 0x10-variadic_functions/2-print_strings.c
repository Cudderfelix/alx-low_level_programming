#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @b: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int b, ...)
{
	va_list ap;
	unsigned int index;
	char *str;

	/* iterate the argument list from the start */
	va_start(ap, b);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && index != b - 1)
			printf("%s", separator);
	}
	/*clean up*/
	va_end(ap);
	printf("\n");
}
