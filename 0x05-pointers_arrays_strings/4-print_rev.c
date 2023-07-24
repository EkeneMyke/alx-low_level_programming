#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints a string in reverse
 *
 *@s: string value
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int chi = 0;
	int o;

	while (*s != '\0')
	{
		chi++;
		s++;
	}
	s--;
	for (o = chi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
