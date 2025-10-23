#include "main.h"

/**
 * print_last_digit - affiche le dernier chiffre d'un nombre
 * @n: nombre à traiter
 *
 * Return: valeur du dernier chiffre
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;
    if (last_digit < 0)
        last_digit = -last_digit;

    _putchar('0' + last_digit);
    return (last_digit);
}
