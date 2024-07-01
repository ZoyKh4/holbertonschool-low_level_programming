#include "main.h"
/**
 * puts2 ecrire nombre paire
 *@str: pointeur
 * Return: 0
 */

void puts2(char *str)
{
int a;
for (a = 0; str[a]; a+=2)
{
_putchar(str[a]);
}
_putchar('\n');
}