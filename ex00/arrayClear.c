#include "array.h"

void arrayClear(int **array)
{
	free(*array);
	*array = NULL;
}
