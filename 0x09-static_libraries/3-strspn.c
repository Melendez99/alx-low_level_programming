#include "main.h"

/**
 * _strspn - get thr lenght of a prefix substring
 * @s: string to search from
 * @accept: search string
 * Return: number of matched characters
 */
unsigned int _strspn(char *s, char *accept)
{
        int i;
        int j;

        for (i = 0 ; s[i] != '\0' ; i++)
        {
                for (j = 0 ; s[i] != accept[j] ; j++)
                {
                        if (accept[j] == '\0')
                                return (i);
                }
        }
        return (0);
}
