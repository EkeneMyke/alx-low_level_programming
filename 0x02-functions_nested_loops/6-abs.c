#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *
 *@i: input number as an integer
 *
 *Return: returns the absolute number
 *
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}

}
