#include <stdio.h>

/**
 * main - will print all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v, m, l;

	for (v = 48; v < 58; v++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > v)
				{
					putchar(v);
					putchar(m);
					putchar(l);
					if (v != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
