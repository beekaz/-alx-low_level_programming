#include "main.h"

/**
 * void more_numbers(void) - entry point
 * more_numbers - from 0-12
 *Return: 0
 */
void more_numbers(void
		)
{

	char b, d;

for (b = 0; b < 10; b++)
{
for (d = 0; d <= 14; d++)

{
if (d > 9)
{
_putchar((d / 10) + '0');
}
_putchar((d % 10) + '0');
}
_putchar(10);
}
}
