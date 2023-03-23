#include "main.h"

/**
 * print_sign - Prints the sign of a digit
 * @n:
 * Return: 1 for positive digit, -1 for 
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{	
	_putchar (48);
	return (0);
	}
}
	
