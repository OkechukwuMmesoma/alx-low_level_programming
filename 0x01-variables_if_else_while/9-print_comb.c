#include <stdio.h>

/**
 * main - will print all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = 48; v < 58; v++)
	{
		putchar(v);
		if (v != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
