#include "main.h"

/**
 * print_last_digit - Main function
 * @n: lenombre a imprimer
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
int last_digit;

if (n < 0)
{
last_digit = n % 10 * -1;
_putchar(last_digit + '0');
return (last_digit);
}
else
{
last_digit = n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
}
