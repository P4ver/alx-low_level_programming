#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point,
 *@argc: nmber of command line 'arg,
 *@argv: nmber of command line 'arg strings,
 *Return: '0' to work successfully,
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int c_cnt;
	int chng_c = 0;
	int q;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	c_cnt = sizeof(coins) / sizeof(coins[0]);
	for (q = 0; q < c_cnt; q++)
	{
		while (cents >= coins[q])
		{
			cents -= coins[q];
			chng_c++;
		}
	}
	printf("%d\n", chng_c);
	return (0);
}
