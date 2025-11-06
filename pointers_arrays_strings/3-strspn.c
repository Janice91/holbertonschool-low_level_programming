#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to search
 * @accept: bytes to match
 *
 * Return: number of bytes in initial segment of s matching accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int count = 0;
    int match;

    for (i = 0; s[i] != '\0'; i++)
    {
        match = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                match = 1;
                break;
            }
        }
        if (!match)
            break;
        count++;
    }

    return (count);
}

