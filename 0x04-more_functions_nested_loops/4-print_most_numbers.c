#include "main.h"

/**
 * print_most_numbers - entry point
 *
 *print_most_numbers _ print 0-9
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
			;
		else
			_putchar(number);
	}
	_putchar('\n');
}
