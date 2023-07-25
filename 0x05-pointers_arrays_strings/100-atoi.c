#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts a string to an integer.
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, g;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	g = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			g = s[i] - '0';
			if (d % 2)
				g = -g;
			n = n * 10 + g;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
}
