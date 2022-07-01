#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - is the entry point of the program
 *
 * Return: 0 if there were no errors
 */
int main(void)
{
	int n;
	int lst_digt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_digt = n % 10;
	if (lst_digt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digt);
	else if (lst_digt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_digt);
	else if (lst_digt < 6 && lst_digt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_digt);
	return (0);
}
