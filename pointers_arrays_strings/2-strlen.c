#include "main.h"

/**
 * _strlen - renvoie la longueur d'une chaîne de caractères
 * @s: chaîne à mesurer
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
