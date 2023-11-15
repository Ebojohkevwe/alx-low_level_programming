#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints single digits of base 10 without printf
 *
 * Return: 0 if the programming ran to completion
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	putchar(i + '0');
	putchar('\n');
	return (0);
}
