#include "main.h"

/**
 * _isdigit - check if num are 0-9
 * @c: char to be checked
 *
 * Return: either 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
