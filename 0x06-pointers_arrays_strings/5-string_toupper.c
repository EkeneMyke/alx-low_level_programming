#include "main.h"
/**
 *string_toupper - function that changes the case of a string.
 *@n: string value
 *Return: Always 0.
 */
char *string_toupper(char *n)
{
	while (*n != '\0')
	{
		if (*n >= 'a' && *n <= 'z')
		{
			*n = *n - ('a' - 'A');
		}
		n++;
	}
}
