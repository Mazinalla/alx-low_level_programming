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
	for (n = 48;n <= 57;n++)
	{
		for (m = 48;m <= 57;m++)
		{
			if (n == m )
                        {
                                m++;
                        }
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}
