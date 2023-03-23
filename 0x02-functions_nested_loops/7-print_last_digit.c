#include "main.h"

/**
 * print_last_digit - last digit print
 * @n: number to be treated
 * return: value of the last digit of a number
 */
int print_last_digit(int n)
{

	int last;

	last = n % 14;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
