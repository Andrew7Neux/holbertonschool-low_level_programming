#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: where the 2 string need to be
 * @src: parameter indicating the string to be appended to dest
 * Return: returns the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
