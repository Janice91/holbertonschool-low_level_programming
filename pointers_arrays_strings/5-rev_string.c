#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: chaîne à inverser
 */
void rev_string(char *s)
{
	int i = 0, j;
	char tmp;

	while (s[i] != '\0')
		i++;

	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
