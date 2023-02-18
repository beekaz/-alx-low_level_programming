#include <stdio.h>
/**
 * main - Entry function
 * Return: 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
