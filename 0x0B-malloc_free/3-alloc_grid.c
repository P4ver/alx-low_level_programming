#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to a
 *	2 dimensional array of integers.
 *@width: the intput width,
 *@height:input height,
 *
 *Return: return grid (gr_d)
 */
int **alloc_grid(int width, int height)
{
	int **gr_d;
	int g;
	int f;

	if (width <= 0 || height <= 0)
		return (NULL);
	gr_d = (int **)malloc(height * sizeof(int *));
	if (gr_d == NULL)
		return (NULL);
	for (g = 0; g < height; g++)
	{
		gr_d[g] = (int *)malloc(width * sizeof(int));
		if (gr_d[g] == NULL)
		{
			for (f = 0; f < g; f++)
				free(gr_d[f]);
			free(gr_d);
			return (NULL);
		}
		for (f = 0; f < width; f++)
			gr_d[g][f] = 0;
	}
	return (gr_d);
}
