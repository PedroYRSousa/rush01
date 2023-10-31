#include "ref.h"

void refClear(int **ref)
{
	free(*ref);
	*ref = NULL;
}
