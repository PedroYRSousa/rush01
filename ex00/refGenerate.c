#include "ref.h"

static int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}
static char charToInt(int i)
{
	return i - '0';
}
static void *showError(int **ref) {
	error();
	refClear(ref);
	return NULL;
}
static int isValidInput(char c)
{
	static int size = 0;
	static int mustBeSpace = FALSE;

	if (isDigit(c) == TRUE && mustBeSpace != FALSE)
		return FALSE;
	if (c == ' ' && mustBeSpace != TRUE)
		return FALSE;
	if (isDigit(c) == TRUE)
		size++;
	if (size > MAP_SIZE * MAP_SIZE)
		return FALSE;

	mustBeSpace = !mustBeSpace;
	return TRUE;
}

int *refGenerate(int argc, char **argv)
{
	int *ref;
	int index;

	ref = refAlloc(REF_SIZE);
	if (argc != 2)
		return showError(&ref);

	index = 0;
	while ((*argv[1]))
	{
		if (!isValidInput(*argv[1]))
			return showError(&ref);

		if (isDigit(*argv[1]) == TRUE)
		{
			ref[index] = charToInt(*argv[1]);
			index++;
		}
		argv[1]++;
	}

	return ref;
}
