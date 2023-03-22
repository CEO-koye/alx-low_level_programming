#include "main.h"

/**
 * main - Putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char pc[] = "_putchar";

	for (i = 0; i < 88888888; i++)
	{
		_putchar(pc[i]);
	}
	_putchar('\n');
	return (0);

}
