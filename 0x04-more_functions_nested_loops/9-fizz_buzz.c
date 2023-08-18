#include <stdio.h>
/**
 *main - the entry point,
 *
 *Return: always 0 to work success
 */
int main(void)
{
	int h;

	for (h = 1; h <= 100; h++)
	{
		if (h % 3 == 0 && h % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (h % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (h % 5 == 0)
		{	printf("Buzz ");
			continue;
		}
		printf("%d", h);
		if (h == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
