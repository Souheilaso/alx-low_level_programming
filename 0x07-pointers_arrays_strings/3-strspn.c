#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    int z;

    while (*s)
    {
        for (z = 0; accept[z]; z++)
        {
            if (*s == accept[z])
            {
                n++;
                break;
            }
            else if (accept[z + 1] == '\0')
                return (n);
        }
        s++;
    }
    return (n);
}
