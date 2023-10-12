#include <stdio.h>
/**
 * main - Entry point.
 * Description: `prints all possible different combinations
 * of two digits`.
 * Return:always 0(succsss)
 */

int main(void)
{
	int n;
	int m;
	int x;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m < 57; m++)
		{
			if (m == n)
			{
				m++;
			}
			for (x = 48; x < 57; x++)
			{
				if (x == m)
				{
					x++;
				}
				putchar(n);
				putchar(m);
				putchar(x);
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
