#include<stdio.h>
#include<unistd.h>
/**
 * main - the entry point
 *
 * Description: write instead print to print a quote write(int fd,void* bf,siz)
 *
 * Return: 1 doesn't work successfully
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
