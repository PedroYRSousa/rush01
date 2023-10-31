#include "ref.h"

static int isDigit(char c)
{
	return (c >= '0' && c <= '9');
}
static int charToInt(char i)
{
	return i - '0';
}
static void *showError(int **ref)
{
	error();
	arrayClear(ref);
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
	if (size > MATRIX_SIZE * MATRIX_SIZE)
		return FALSE;

	mustBeSpace = !mustBeSpace;
	return TRUE;
}

int *refGenerate(int argc, char **argv)
{
	int *ref;
	int index;

	ref = arrayAlloc();
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
