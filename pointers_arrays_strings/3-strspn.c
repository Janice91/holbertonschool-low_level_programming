#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to search
 * @accept: characters to accept
 * Return: number of bytes in initial segment of s containing only accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    char *a;

    while (*s)
    {
        a = accept;
        while (*a && *a != *s)
        {
            a++;
        }
        if (!*a)
        {
            break;
        }
        count++;
        s++;
    }
    return (count);
}
