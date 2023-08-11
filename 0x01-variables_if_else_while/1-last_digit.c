#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - the entry point 
 *
 *Description: project to get the last dgit of the nmbr
 *Return: 0 to work successfully
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}
