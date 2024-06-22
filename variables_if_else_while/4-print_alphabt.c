#include <stdio.h>

/**
 * main - print alphabet exept e nd q
 * Return: always 0
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
continue;
putchar(letter);
}

putchar('\n');
return (0);
}