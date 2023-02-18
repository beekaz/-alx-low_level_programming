#include <stdio.h>
/**
 * main - Entry function
 * Return: 0(success)
 */
int main(void)
{
int num;
char l;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}
