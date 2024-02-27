#include <stdio.h>
#include "main.h"
/**
 *_puts - print a string
 *@str: the string that is gonna print
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str++;
	}
	_putchar ('\n');
}
