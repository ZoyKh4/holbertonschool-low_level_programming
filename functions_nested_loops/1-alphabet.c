#include "main.h"

/**
 * main - ecrire l alphabet comme un grand
 */

void print_alphabet(void)

{
char alphabet;
for(alphabet = 'a'; alphabet <= 'z'; alphabet++);
{
_putchar(alphabet);
}
_putchar('\n');
return;
}
