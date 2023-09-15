#include "main.h"
#include <unistd.h>

/**
 * _putchar - Will write the character c to stdout
 * @c: The printing character
 *
 * Return: On success 1.
 * On erro, -1 will return, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
