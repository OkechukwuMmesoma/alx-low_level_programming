#include <stdio.h>

/**
 * main - Will print the lowercase in reverse
 * followed by a new line in the code
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mn;

	for (mn = 'z'; mn >= 'a'; mn--)
	{
		putchar(mn);
	}
	putchar('\n');
	return (0);
}
