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
int longueur = strlen(s);
int i;
for (i = longueur - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
