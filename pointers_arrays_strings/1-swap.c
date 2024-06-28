#include "main.h"
/**
 * swap_int - variable
 *@b: pointeur
 *@a: pointeur
 * description: inverser les resutlats
 */

void swap_int(int *a, int *b)

{
int temp = 0;

temp = *a;
*a = *b;
*b = temp;
}
