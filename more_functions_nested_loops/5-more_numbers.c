#include <stdio.h>
#include "main.h"
/**
 * more_numbers - This prints a set of number from 0-14.
 *
 * Return - from 0 to 14, followed by a new line.
 *
 */

void more_numbers(void)
{
	int num, line;

	for (line = 0 ; line <= 10 ; line++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
		if (num > 9)
		{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		}
		else
		{
		putchar(num + '0');
		}
		}
	}
}
