#include "main.h"
/**
 * print_triangle - prototype
 * 
 * 
 */

void print_triangle(int size)

{
int space;
int hashtag = size; 

if (size <= 0)
{
_putchar('\n');
}
else
{
for (space = 1; space <= size; space++)
{
for (hashtag= 0; hashtag < size - space; hashtag++)
{
_putchar(' ');
}
for (hashtag = 0; hashtag < space; hashtag++)
{
_putchar('#');
}
_putchar('\n');
}
}
}