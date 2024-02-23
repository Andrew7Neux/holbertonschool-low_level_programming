#include "main.h"
#include <stdio.h>

/**
 *_abs - runs the program
 *@l: is the number to get is absolute value
 *
 *Return: If @l if positive and @-l if is negative.
 */
int _abs(int l)
{
	if (l >= 0)
	{
		return (l);
	}
	else
	{
		return (-l);
	}
}
