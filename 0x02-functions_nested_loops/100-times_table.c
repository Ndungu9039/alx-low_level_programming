#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j;

if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
putformat(i * j);
_putchar('\n');
}
}
}
