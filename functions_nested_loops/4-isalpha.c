#include "main.h"
/**
 * _isalpha - lettre ou non
 * @c: caractere a check
 * Return - 1 ou 2
 */

int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
