#include <stdio.h>
/**
 *  main - prints all possible different combinations of two digits
 *
 *  Return: Always 0(Success)
 */
int main(void)
{
	int let_1, let_2;

	let_1 = '0';
	let_2 = '0';

	while (let_1 <= '9')
	{
		while (num_2 <= '9')
		{
			if (num_1 < num_2)
			{
				putchar(num_1);
				putchar(num_2);
				if (num_1 != '8' || num_1 == '8' && num_2 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
				

