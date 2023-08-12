#include <stdio.h>
int main(void)
{
	int i;
	char alphbt[40]="abcdefghijklmnopqrstuvwxyz";

	for(i = 0; i <= 25; i++)
	{
		putchar(alphbt[i]);
	}
	putchar("\n");
	return (0);
}
