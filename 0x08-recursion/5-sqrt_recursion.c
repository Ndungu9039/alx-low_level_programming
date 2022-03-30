#include "main.h"

/**
 * _sqrt_recursion - natural square root
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n) { return (_sqrt(n, 1)); }

/**
 * _sqrt - _sqrt_recursion
 * @n: integer parameters
 * @i: integer parameters
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
if (n < 0)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
