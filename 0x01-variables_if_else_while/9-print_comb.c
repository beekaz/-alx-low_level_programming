#include <stdio.h>
/**
 * main - Entry function
 * Return: 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num <10; num++)
{
putchar(num);
if (num != 10)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}


