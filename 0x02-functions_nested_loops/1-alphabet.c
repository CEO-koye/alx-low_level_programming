#include "main.h"

/**
 * Print_alphabet in lowercase
 * Description: writes alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	
		_putchar(alpha);
		_putchar('\n');
}

