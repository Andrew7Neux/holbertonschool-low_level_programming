#include "main.h"

/**
 * more_numbers - This prints a set of number from 0-14.
 *
 *
 *
 */

void more_numbers(void)
{
	int num, line;

	for (line = 0 ; line <= 9 ; line++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
