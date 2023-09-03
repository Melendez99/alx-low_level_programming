#include "main.h"

/**
 * _strpbrk - locates first occurrence in string
 * @s: input
 * @accept: input
 * Return: 0 successfully
 */

char *_strpbrk(char *s, char *accept)
{
        int i;

        while (*s)
        {
                for (i = 0 ; accept[i]; i++)
                {
                        if (*s == accept[i])
                                return (s);
                }
                s++;
        }
        return ('\0');
}
