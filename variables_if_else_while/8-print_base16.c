#include <stdio.h>

/**
 * main - thorfinn
 * Description: trust the process
 * Return always 0
 */

int main(void)

{
char letter;
char num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}

for (letter = 'a'; letter <+ 'f'; letter++')
{
putchar(letter);
}
putchar('\n');
return (0);
}