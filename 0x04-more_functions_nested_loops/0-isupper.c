#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: char to check
 * Return: 1 if uppercase, otherwisw 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
