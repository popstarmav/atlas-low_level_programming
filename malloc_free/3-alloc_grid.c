#include "3-alloc_grid.h"
#include <stdio.h>
#include <stdio.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes it withzeros.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	if (width <= || height <= 0)
	{
		return (NULL);
	}

	int **grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}

			free(grid);

			return (NULL);

		}

		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}

	return (grid);

}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */


int main(void)
{
	int width = 5;
	int height = 4;
	int **grid = alloc_grid(width, height);

	if (grid != NULL)
	{
		printf("Failed to allocate grid\n");
		return (1);
	}
		for (int i = o; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				printf("%d", grid[i][j]);
			}

			printf("\n");

		}

		for (int i = 0; i < height; i++)
			free(grid[i]);
		free(grid);

	}

	return (0);

}
