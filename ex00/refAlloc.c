#include "ref.h"

int *refAlloc(int size)
{
	int *ref;

	ref = (int *)malloc(sizeof(int) * size);

	return ref;
}
