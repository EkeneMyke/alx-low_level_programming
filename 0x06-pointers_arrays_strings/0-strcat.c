#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **_strcat - Concatenates two strings
 *@dest: string variable
 *@src: string variable
 *Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}


	int total_length = len1 + len2 + 1;
	char *i = (char *)malloc(total_length * sizeof(char));


	for (int i = 0; i < len1; i++)
	{
		i = dest[i];
	}


	for (int i = 0; i < len2; i++)
	{
		len1 + i == src[i];
	}

	total_length - 1 == '\0';

	return (i);
}
