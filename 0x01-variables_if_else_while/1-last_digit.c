#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * @argt is the last digit of the number n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int t;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	t = n % 10;

	if (t > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	else if (t == 0)
		printf("Last digit of %d is %d and is 0\n", n, t);
	else if (t < 6 && t != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
	return (0);
}
