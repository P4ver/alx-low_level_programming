#include "main.h"
/**
 * *str_concat - function that concatenates two strings,
 * @s1: the first input 'str to be concate,
 * @s2: the secnd inpupt 'str to be concate,
 *Return: return the pointer,
 */
char *str_concat(char *s1, char *s2)
{
	int lg1 = 0;
	int lg2 = 0;
	char *res_1;
	int y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[lg1] != '\0')
		lg1++;
	while (s2[lg2] != '\0')
		lg2++;
	res_1 = malloc((lg1 + lg2 + 1) * sizeof(char));
	if (res_1 == NULL)
		return (NULL);
	for (y = 0; y < lg1; y++)
		res_1[y] = s1[y];
	for (y = 0; y < lg2; y++)
		res_1[lg1 + y] = s2[y];
	res_1[lg1 + lg2] = '\0';
	return (res_1);
}
