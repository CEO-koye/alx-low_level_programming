#include <unistd.h>

/**
 * _putchar - write the putchar character
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
