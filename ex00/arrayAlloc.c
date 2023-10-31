#include "array.h"

int *arrayAlloc(void)
{
	int x;
	int *array;

	array = (int *)malloc(sizeof(int) * ARRAY_SIZE);
	x = 0;
	while (x < ARRAY_SIZE)
	{
		array[x] = 0;
		x++;
	}
	return array;
}
