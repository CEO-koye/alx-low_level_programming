#include <stdio.h>

/**
 *main - Size is not grandeur, and territory does not make a nation
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char:%c\n", sizeof(char));
	printf("Size of an int:%d\n", sizeof(int));
	printf("Size of a long int:%ld\n", sizeof(long int));
	printf("Size of a long long int:%lld\n", sizeof(long long int));
	printf("Size of a float:%f\n", sizeof(float));
	return (0);
}
