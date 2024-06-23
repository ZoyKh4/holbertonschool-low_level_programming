#include "main.h"
/**
 *
 * print-alphabet_x10 - fonction main write alph 10 time 
 */

void print_alphabet_x10(void)
{
char alphabet;
int time;
for (time = 0; time < 10; time++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
