#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: display alphabet in lower case followed
 * by a new line
 * Return: 0 if the programe runs to completion
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
