#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: string
 *@accept: prefix value
 *Return: Returns an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*accept && *s && *accept == *s)
	{
		length++;
		s++;
	}

	return (length);
}
