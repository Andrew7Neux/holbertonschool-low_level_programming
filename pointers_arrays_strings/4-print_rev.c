#include "main.h"
/**
 * print_rev - print the string in reverse
 * @s: is the string that in gonna print
 *
 */

void print_rev(char *s)
{
	int c=0;
	while(s [c] != '\0')
	{
		c++;
	}
for (c-=1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar ('\n');
}
