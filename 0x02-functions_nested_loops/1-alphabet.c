#include"main.h"

/**
* print_alphabet - utilizes on the _putchar function to print
*		the alphabet a - z
*/

void print_alphabet(void)
{
	int bh;

	for (bh = 'a'; bh <= 'z'; ++bh)
		_putchar(bh);
	_putchar('\n');
}
