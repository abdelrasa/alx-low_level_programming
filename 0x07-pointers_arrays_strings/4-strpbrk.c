#include "main.h"
/**
 * _strpbrk - Locates the first occurrence in the string
 * @s: pointer
 * @accept: bytes in the string
 * Retrun: 0 Always
 */
char *_strpbrk(char *s, char *accept)
{
                int i;

                while (*s)
                {
                        for (i = 0; accept[i]; i++)
                        {
                        if (*s == accept[i])
                        return (s);
                        }
                s++;
                }

        return ('\0');
}
