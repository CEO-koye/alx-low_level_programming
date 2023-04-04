#include "main.h"
/**
 * _memset -this fills blocks of memory with constant byte
 * @s: initial address of memory to be filled with a constant byte
 * @b: desired byte
 * @n: no of bytes to be changed
 * Return: return with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
