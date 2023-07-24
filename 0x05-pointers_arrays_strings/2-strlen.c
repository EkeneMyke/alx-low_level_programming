#include "main.h"
#include <stdio.h>
/**
 *_strlen - function to check for the lenght of a string
 *
 *@s: string value
 *Return: lenght
 */
int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}
	return (str);
}
