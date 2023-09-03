#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: search string
 * @c: character yo search in string
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                        return (s);
                s++;
        }
        if (*s == c)
                return (s);
        return (NULL);
}
