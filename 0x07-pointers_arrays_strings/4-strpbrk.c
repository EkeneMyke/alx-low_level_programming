#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: A pointer to the input string
 *@accept: A pointer to the set of bytes you want to
 *search for in the input string
 *Return: Returns 1 or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
