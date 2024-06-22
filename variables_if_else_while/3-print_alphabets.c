#include <stdio.h>

/**
 * main - etry point of th program
 *
 * descripton: trustthe process
 *
 * return: always 0
*/

int main(void)
{
char letter;
char Uletter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (Uletter = 'A'; Uletter <= 'Z'; Uletter++)
{
putchar(Uletter);
}
putchar('\n');
return (0);
}
