#include "main.h"
#include <stdio.h>
/**
 *_isalpha - shows 1 if the input is a letter.
 *other cases show 0
 *
 *@c: The character in ASCII Code
 *
 *Return: 1 for letters, 0 for the rest
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
