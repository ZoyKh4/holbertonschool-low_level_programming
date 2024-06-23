#include "main.h"

/**
 * print_alphabet - Affiche les lettres de l'alphabet en minuscule.
 *
 * Cette fonction utilise la fonction
 * Chaque lettre est imprimée sur une nouvelle ligne.
 */

void print_alphabet(void)

{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
return;
}
