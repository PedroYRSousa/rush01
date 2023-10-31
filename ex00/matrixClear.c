#include "matrix.h"

void matrixClear(int ***matrix)
{
	int x;

	x = 0;
	while (x < MATRIX_SIZE)
	{
		free((*matrix)[x]);
		(*matrix)[x] = NULL;
		x++;
	}

	free(*matrix);
	*matrix = NULL;
}
