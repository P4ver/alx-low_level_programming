#include <stdio.h>
void m_construct_funct(void) __attribute__((constructor));
/**
 * m_construct_funct - construct to print a msg,
 */
void m_construct_funct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
