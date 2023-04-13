#include "main.h"
/**
 * alloc_grid - pointer to 2D int array
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL or array pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, size = width * height;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
