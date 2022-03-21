#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 * return-void
 *
 */

void puts2(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
if (*str == '\0')
{
break;
}
else
{
str++;
}

}
_putchar('\n');
}
