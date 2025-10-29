#include "main.h"

/**
 * print_rev - affiche une chaîne en ordre inverse suivie d'un saut de ligne
 * @s: chaîne à afficher
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
