#include "main.h"

/**
 * Print alphabet in lowercase
 * followed by a new line
 */

void print_alphabet(void)
{
	int first_low_char = (int)'a';
	int last_low_char = (int)'z';

	while (first_low_char <= last_low_char)
	{
		_putchar(first_low_char);
		first_low_char++;
	}
	_putchar('\n');
}

