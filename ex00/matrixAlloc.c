#include "matrix.h"

t_matrix **matrixAlloc(void)
{
	int x;
	int y;
	t_matrix **matrix;

	matrix = (t_matrix **)malloc(sizeof(t_matrix *) * MATRIX_SIZE);

	y = 0;
	while (y < MATRIX_SIZE)
	{
		matrix[y] = (t_matrix *)malloc(sizeof(t_matrix) * MATRIX_SIZE);

		x = 0;
		while (x < MATRIX_SIZE)
		{
			matrix[y][x].raw = ONE_REF | TWO_REF | THREE_REF | FOUR_REF;
			matrix[y][x].value = -1;
			x++;
		}

		y++;
	}

	return matrix;
}
