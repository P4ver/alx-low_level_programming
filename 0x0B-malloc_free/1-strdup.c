#include "main.h"
/**
 * *_strdup - function that returns a pointer to a newly
 *	allocated space in memory,
 *@str: pointer (stg)
 *
 *Return: the result du_plc,
 */
char *_strdup(char *str)
{
	int len2t = 0;
	char *du_plc;
	int q;

	if (str == NULL)
		return (NULL);
	while (str[len2t] != '\0')
		len2t++;
	du_plc = malloc((len2t + 1) * sizeof(char));
	if (du_plc == NULL)
		return (NULL);
	for (q = 0; q <= len2t; q++)
		du_plc[q] = str[q];
	return (du_plc);
}
