#include "main.h"

/**
 * _puts - ecrire
 *@str: pointeur
 * Return: 0.
 */

void _puts(char *str)
{
int data;

for (data = 0; str[data]; data++)
{
_putchar (str[data]);
}
_putchar ('\n');
}
