#include "main.h"

/**
 * main - checks for uppercase
 *
 * Return: 1 if uppercase, otherwisw 0
 */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
