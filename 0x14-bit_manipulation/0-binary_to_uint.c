#include "main.h"

/**
 * binary_to_uint - a function that convert a binary number to an unsigned int
 * @b: string
 * Return: converted number or 0 if there is one or more chars in the string
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int convn;
        unsigned int character;
        int len;

        if (b == NULL)
                return (0);

        for (len = 0; b[len]; len++)
        {
                if (b[len] != '0' && b[len] != '1')
                        return (0);
        }

        for (character = 1, convn = 0, len--; len >= 0; len--, convn *= 2)
        {
                if (b[len] == '1')
                        convn += character;
        }

        return (convn);
}

