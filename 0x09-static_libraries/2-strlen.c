#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len += 1;
		s += 1;
	}
	return (len);
}
