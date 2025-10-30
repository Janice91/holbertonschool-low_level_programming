#include "main.h"

/**
 * _strncat - concatène deux chaînes avec un nombre limité de caractères
 * @dest: chaîne de destination
 * @src: chaîne source
 * @n: nombre maximum de caractères à copier depuis src
 *
 * Return: pointeur vers la chaîne résultante dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
