#include "main.h"
/**
 *_islower- returns 1 if it is a lowercase character
 *and returns 0 if it is otherwise
 *@c: The character is ASCII Code
 *
 *Return: returns 1 for lowercase and 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
