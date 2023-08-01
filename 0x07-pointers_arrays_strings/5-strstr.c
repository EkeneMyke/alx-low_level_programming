#include "main.h"
/**
 *_strstr -  locates a substring.
 *@haystack: string value
 *@needle: substring value
 *Return: returns an integer
 */
char *_strstr(char *haystack, char *needle)
{
	int haystackLen;
	int needleLen;
	int i;

	for (int i = 0; i <= haystackLen - needleLen; i++)
	{
		int j;

		for (j = 0; j < needleLen; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (j == needleLen)
		{
			return (i);
		}
	}
	return (-1);
}
