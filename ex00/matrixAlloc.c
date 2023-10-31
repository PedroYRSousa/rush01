#include "matrix.h"

int **matrixAlloc(void)
{
	int x;
	int y;
	int **matrix;

	matrix = (int **)malloc(sizeof(int *) * MATRIX_SIZE);

	y = 0;
	while (y < MATRIX_SIZE)
	{
		matrix[y] = (int *)malloc(sizeof(int) * MATRIX_SIZE);

		x = 0;
		while (x < MATRIX_SIZE)
		{
			matrix[y][x] = 0;
			x++;
		}

		y++;
	}

	return matrix;
}
