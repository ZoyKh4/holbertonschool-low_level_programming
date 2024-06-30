#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print inverser
 *@s: char s
 * Return: 0
 */

void print_rev(char *s)
{
int longueur;

for (longueur = 0; s[longueur]; longueur++)
{
}
longueur--;
while (longueur >= 0)
{
_putchar(s[longueur]);
longueur--;
}
_putchar('\n');
}
