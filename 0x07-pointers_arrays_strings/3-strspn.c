#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s:
 *@accept: 
 *Return: Returns an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0;

	while (*accept && *s && *accept == *s)
	{
		length++;
		accept++;
		s++;
	}

	return length;
}
