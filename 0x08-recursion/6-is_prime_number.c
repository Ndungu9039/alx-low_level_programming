#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer parameters
 * @m: integer parameters
 * Return: boolean
 */

int divisors(int n, int m)
{
if (m % n == 0)
{
return (0);
}
else if (m / 2 > n)
{
return (divisors(n + 2, m));
}
else
{
return (1);
}
}

/**
 * is_prime_number - prime numbers
 * @n: integer parameters
 * Return: recursion
 */

int is_primenumber(intn)
{
if ((!(n % 2) && n != 2) || n < 2)
{
return (0);
}
else
{
return (divisors(3, n));
}
}
