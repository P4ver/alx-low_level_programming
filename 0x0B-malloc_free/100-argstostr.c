#include "main.h"
/**
 * _strlen - lenght string,
 *@m: pointer char,
 *Return: return size,
 */
int _strlen(char *m)
{
	int ss = 0;

	while (m[ss] != '\0')
		ss++;
	return (ss);
}
/**
 * *argstostr - function that concatenates all the arguments of your program,
 *@ac: variablz int,
 *@av: variable 'arg,
 *Return: value of the pointer s,
 */
char *argstostr(int ac, char **av)
{
	int p = 0;
	int cnt = 0;
	int x = 0;
	int nh = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (p < ac)
	{
		nh += _strlen(av[p]);
		p++;
		nh++;
	}
	s = malloc(sizeof(char) * nh + 1);
	if (s == 0)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
		x = 0;
		while (av[p][x] != '\0')
		{
			s[cnt] = av[p][x];
			x++;
			cnt++;
		}
		s[cnt] = '\n';
		cnt++;
	}
	s[cnt] = '\0';
	return (s);
}
