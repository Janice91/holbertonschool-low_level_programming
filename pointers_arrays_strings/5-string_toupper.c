#include "main.h"

/**
 * string_toupper - change toutes les lettres minuscules d’une chaîne en majuscules
 * @s: chaîne de caractères
 *
 * Return: pointeur vers la chaîne modifiée
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
