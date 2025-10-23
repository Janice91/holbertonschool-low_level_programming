#include "main.h"

/**
 * times_table - affiche la table de multiplication de 9
 */
void times_table(void)
{
    int i, j, val;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            val = i * j;
            if (j == 0)
                _putchar('0' + val);
            else
            {
                _putchar(',');
                _putchar(' ');
                if (val < 10)
                    _putchar(' ');
                else
                    _putchar('0' + val / 10);
                _putchar('0' + val % 10);
            }
        }
        _putchar('\n');
    }
}
