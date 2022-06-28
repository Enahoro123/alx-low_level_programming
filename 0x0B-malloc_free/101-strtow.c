#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **c;
	unsigned int a, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	c = malloc((height + 1) * sizeof(char *));
	if (c == NULL || height == 0)
	{
		free(c);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (a = k; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				k++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				c[i] = malloc((a - k + 2) * sizeof(char));
				if (c[i] == NULL)
				{
					ch_free_grid(c, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= a; k++, j++)
			c[i][j] = str[k];
		c[i][j] = '\0';
	}
	c[i] = NULL;
	return (c);
}
