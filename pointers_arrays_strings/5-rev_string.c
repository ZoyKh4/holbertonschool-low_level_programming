#include <stdio.h>
#include <string.h>
#include "2-strlen.c"
/**
 * rev_string - reverse string
 *@s: pointeur
 *
 */

void rev_string(char *s)
{
char *a = s;
char *b = s + _strlen(s) - 1;

while (a < b)
{
char c = *a;
*a = *b;
*b = c;
a++;
b--;
}
}
