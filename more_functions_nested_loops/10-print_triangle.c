#include <stdio.h>
#include "main.h"
/**
 *print_triangle - funcion to create a triangle
 *@size: size of the triangle
 */

void print_triangle(int size)
{
	int lines, trg;

	if (size <= 0)
	{
		putchar('\n');
	}
	for (lines = 1; lines <= size; lines++)
	{
		for (trg = 1; trg <= size; trg++)
		{
			if ((size - trg) >= lines)
			{
				putchar(' ');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}

}
