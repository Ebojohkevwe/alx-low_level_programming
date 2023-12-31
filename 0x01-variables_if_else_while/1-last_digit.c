#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get to the last digit
 *
 * Description: assign random number to the last digit
 *
 * Return: 0 if the programme runs to completion
 */

int main(void)
{
	int n, n_ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_ld = n % 10;

	if (n_ld > 5)
	printf("Last digit of %i is %i and is greater than 5\n", n, n_ld);
	else if (n_ld == 0)
	printf("Last digit of %i is %i and is 0\n", n, n_ld);
	else
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_ld);
	return (0);
}
