#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the no of bytes to be allocated
 * 
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
