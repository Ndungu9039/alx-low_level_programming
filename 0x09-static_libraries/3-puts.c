#include "main.h"

/**
 * _puts - prints strings
 * @str: input string
 * Return: nothing
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
