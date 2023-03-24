#include "main.h"
#include <stdio.h>
/**
 * main - prints 1 t0 100
 * print fizz for multiples of 3
 * print buzz for multiples of 5
 * print fizzbuzz for multiples of 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else /*(i == 1)*/
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
