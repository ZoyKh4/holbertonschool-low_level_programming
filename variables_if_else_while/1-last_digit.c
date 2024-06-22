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
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
printf("last_digit of %d is %d and is greater than 5\n", n, last_digit);
}
if (last_digit != 0 && last_digit < 6)
{
printf("last-digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
if (last_digit == 0)
{
printf("last_digit of %d is %d and is 0\n", n, last_digit);
}
return (0);
}
