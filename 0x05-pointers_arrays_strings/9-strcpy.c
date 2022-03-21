#include "main.h"

/**
 * *_strcpy - copy strg to nother ddress
 * @dest: pointer 1
 * @src: pointer 2
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
