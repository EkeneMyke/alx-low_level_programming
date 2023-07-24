#include "main.h"
#include <stdio.h>
/**
 *rev_string - prints a string in reverse.
 *print_rev: printsa string in reverse
 *
 *@s: string value
 *Return: string in reverse
 */
void print_rev(char *s)
{
	char rev = s[0];
	int counter = 0;
	int l;

	while (s[counter] != '\0')
		counter++;
	for (l = 0; l < counter; l++)
	{
		counter--;
		rev = s[l];
		s[l] = s[counter];
		s[counter] = rev;
	}
}

