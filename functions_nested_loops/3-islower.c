#include "main.h"

/**
 * _islower - permet decheck
 * @c:caractere a check
 * Return: 1 or 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
