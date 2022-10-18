#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main-Entry point
 * Description : 'print the last digit n'
 * Return:Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)

{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %d is %d ", n, ld);
	if (ld > 5)
		printf("and is greater than 5");
	else if (ld == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	/* your code goes there */

	return (0);

}
