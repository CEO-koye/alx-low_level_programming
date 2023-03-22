#include "main.h"

/**
 * main - Pint alphabet in lowercase
 * Description: writes alphabet
 * Return: void
 */

/*user defined funtion*/
void print_alphabet_x10(void)
{
		int i = 0;
		char alpha;

			while (i <= 9)
			{
			for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
			}
			_putchar('\n');
			i++;
}
