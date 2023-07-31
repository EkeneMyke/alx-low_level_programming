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
	char *ptr;

	while (*s)
	{
		ptr = accept;
	}
	while (*accept)
	{
		if (*s == *ptr)
		{
			return (1);
		}
		bytes_ptr++;
	}
	str++;

	return (0);
}
