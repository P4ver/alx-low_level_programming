#include "main.h"
/**
 * cnt_of_wrds -  number of wrds in 'str,
 *@s: str variable,
 *Return: return 'u words,
 */
int cnt_of_wrds(char *s)
{
	int q;
	int u_n = 0;

	for (q = 0; s[q]; q++)
	{
		if (s[q] == ' ')
		{
			if (s[q + 1] != ' ' && s[q + 1] != '\0')
				u_n++;
		}
		else if (q == 0)
			u_n++;
	}
	u_n++;
	return (u_n);
}
/**
 * **strtow - function that splits a string into words,
 *@str: string (pointer),
 *Return: the value of pointer 'h,
 */
char **strtow(char *str)
{
	int u, v, w, x;
	int in = 0;
	int iw = 0;
	char **h;

	if (str == NULL || *str == '\0')
		return (NULL);
	in = cnt_of_wrds(str);
	if (in == 1)
		return (NULL);
	h = (char **)malloc(in * sizeof(char *));
	if (h == NULL)
		return (NULL);
	h[in - 1] = NULL;
	u = 0;
	while (str[u])
	{
		if (str[u] != ' ' && (u == 0 || str[u - 1] == ' '))
		{
			for (v = 1; str[u + v] != ' ' && str[u + v]; v++)
				;
			v++;
			h[iw] = (char *)malloc(v * sizeof(char));
			v--;
			if (h[iw] == NULL)
			{
				for (w = 0; w < iw; w++)
					free(h[w]);
				free(h[in - 1]);
				free(h);
				return (NULL);
			}
			for (x = 0; x < v; x++)
				h[iw][x] = str[u + x];
			h[iw][x] = '\0';
			iw++;
			u += v;
		}
		else
			u++;
	}
	return (h);
}
