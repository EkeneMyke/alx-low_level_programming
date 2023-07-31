#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: size
 * @n: value to be filled in memory block
 * Return: Returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
