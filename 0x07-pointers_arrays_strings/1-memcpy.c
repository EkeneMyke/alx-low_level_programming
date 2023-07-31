#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory block where data is copied
 * @src: memory block from where data is copied
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
