#include "main.h"

/**
 * print numbers - function checks for a digit of 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
