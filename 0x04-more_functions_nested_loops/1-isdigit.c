#include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @c: the character to be checked
 *
 * Return: 1 if c is a digiit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
