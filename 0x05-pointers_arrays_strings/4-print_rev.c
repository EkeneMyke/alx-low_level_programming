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
	int str = 0;
	int o;

	while (*s != '0')
	{
		str++;
		s++;
	}
	s--;
	for (o = str; o > 0; o--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
