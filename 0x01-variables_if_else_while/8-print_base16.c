#include <stdio.h>

/**
 * main - Will print numbers between 0 to 9 and letters between a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 48; q < 58; q++)
	{
		putchar(q);
	}
	for (q = 97; q < 103; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
