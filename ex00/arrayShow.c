#include "array.h"

static char intToChar(int i)
{
	return i + '0';
}
void arrayShow(int *array)
{
	int x;
	char c;

	x = 0;
	while (x < ARRAY_SIZE)
	{
		c = intToChar(array[x]);
		write(STDOUT_FILENO, &c, 1);
		if (x + 1 != ARRAY_SIZE)
			write(STDOUT_FILENO, "|", 1);
		x++;
	}

	write(STDOUT_FILENO, "\n", 1);
}
