#include "main.h"
/**
 * more_numbers - to print numbers 0 to 9, 10x
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
