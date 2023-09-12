#include <stdio.h>
/**
 *  main - prints all possible different combinations of three digits
 *  Return: Always 0(Success)
 */
int main(void)
{
	int n, m, l;

	n = '0';
	m = '0';
	l = '0';

	while (n <= '9')
	{
		while (m <= '9')
		{
			while (l <= '9')
			{
				if (n < m && m < l)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
