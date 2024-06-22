#include <stdio.h>

/**
 *
 * main - write numbers
 *
 * Description: trust the process
 *
 * Return: always 0
 */

int main(void)
{
char num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
