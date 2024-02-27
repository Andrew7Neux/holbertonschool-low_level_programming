#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: is the string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;
	return (i);
}
