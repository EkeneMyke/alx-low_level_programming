#include "main.h"
#include <stdio.h>

/**
 *print_diagonal - draws a diagonal line on the terminal
 *
 *@n: number of times the character \ is drawn
 *
 *Return: Always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
