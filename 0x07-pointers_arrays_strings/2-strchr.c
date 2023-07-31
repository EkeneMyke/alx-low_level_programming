#include "main.h"

/**
 *_strchr - locates a character in a string
 *@s: input string
 *@c: character to be located
 *Return: returns a pointer or 0
 */
char *_strchr(char *s, char c)
{
	int result;

	for (result = 0; s[result] >= '\0'; result++)
	{
		if (s[result] == c)
			return (s + result);
	}
	return ('\0');
}
