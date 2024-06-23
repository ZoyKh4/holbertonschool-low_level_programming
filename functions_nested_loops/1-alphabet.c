#include "main.h"

/**
 * print_alphabet - Affiche les lettres de l'alphabet en minuscule.
 *
 * Cette fonction utilise la fonction _putchar pour imprimer les lettres de 'a' à 'z'.
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
