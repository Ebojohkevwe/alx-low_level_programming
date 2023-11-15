#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Description - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: returns 0 on success
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
