#include "main.h"
#include <stdio.h>

/**
 *_isdigit - checks for digits in a range of numbers
 *
 *@c: value input
 *
 *Return: returns 1 0r 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
