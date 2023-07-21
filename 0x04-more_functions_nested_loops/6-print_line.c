#include "main.h"
#include <stdio.h>

/**
 *print_line - prints a staright line on the terminal
 *
 *@n: number of times to print character
 *
 *Return: Always 0
 */

void print_line(int n)
{
	for (n = 0; n >= 0; n++)
	{
		if (n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');

}
