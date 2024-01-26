#include <stdarg.h>

/**
 * sum_up - adds all its parameters
 *
 * @b: start of input variables
 *
 * Return: the sum
*/

int sum_up(const unsigned int b, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	/* initialize the argument list from the start */
	va_start(ap, b);

	/* iterate through all parameter values*/
	for (param = 0; param < b; param++)
		/* get the next parameter value and add it to sum*/
		sum += va_arg(ap, int);
	/*Clean up*/
	va_end(ap);

	return (sum);
}
