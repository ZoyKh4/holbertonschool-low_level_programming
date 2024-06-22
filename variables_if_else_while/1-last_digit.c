#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - thorfinn
 * description 'trust the process'
 * Return: always 0
 */

int main(void)

{
	int n;
	int pipi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	pipi = n % 10;
	if (pipi > 5)
{
	printf("%d and %d is greater than 5\n", n);
}
	else if (pipi < 6 && pipi != 0)
{
	printf("%d and %d is less than 6 and not 0\n", n);
}
	else if (pipi == 0)
	{
		printf("%d and %d is 0\n", n);
	}
	return (0);
}
