#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0 if the programme runs to completion
 */

int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
for (j = i + 1; j <= 9; j++)
{
	putchar(i + '0');
	putchar(j + '0');
	if (i < 8)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
