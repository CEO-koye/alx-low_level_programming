#include <unistd.h>

/**
 *_putchar -prints

 *Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
