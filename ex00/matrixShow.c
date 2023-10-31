#include "matrix.h"

static char intToChar(t_matrix matrix)
{
	return matrix.value + '0';
}
void matrixShow(t_matrix **matrix)
{
	int x;
	int y;
	char c;

	y = 0;
	while (y < MATRIX_SIZE)
	{
		x = 0;
		while (x < MATRIX_SIZE)
		{
			c = intToChar(matrix[y][x]);
			write(STDOUT_FILENO, &c, 1);
			if (x + 1 != MATRIX_SIZE)
				write(STDOUT_FILENO, " ", 1);
			x++;
		}

		write(STDOUT_FILENO, "\n", 1);
		y++;
	}
}
