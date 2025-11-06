#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string of bytes to match
 * Return: pointer to first occurrence of any byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
    char *a;

    while (*s)
    {
        a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                return (s);
            }
            a++;
        }
        s++;
    }
    return (NULL);
}
