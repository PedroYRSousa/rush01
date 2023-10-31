#include "error.h"

void error(void)
{
	const char *msg = "Error\n";

	write(STDOUT_FILENO, msg, sizeof(msg) - 1);
}
