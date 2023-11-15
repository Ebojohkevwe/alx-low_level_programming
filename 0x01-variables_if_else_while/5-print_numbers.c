#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: prints all single digits of base ten
 *
 * Return: 0 if the programme runs to completion
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	putchar(i + '0');
	putchar('\n');
	return (0);
}
