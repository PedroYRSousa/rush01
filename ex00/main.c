// Exercício : 00
// rush-01
// Pasta de entrega : ex00/
// Arquivos para entregar : Todos os arquivos necessários
// Funções autorizadas : write, malloc, free

#include "ref.h"

static void init(int **ref, int ***map, int argc, char **argv)
{
	*(ref) = refGenerate(argc, argv);
	if (*ref != NULL)
		(*map) = matrixAlloc();

}
static void loop(int **ref, int ***map)
{
	if (*ref == NULL) return;
	if (*map == NULL) return;

	arrayShow(*ref);
	matrixShow(*map);
}
static void clear(int **ref, int ***map)
{
	if (*ref != NULL)
		arrayClear(ref);
	if (*map != NULL)
		matrixClear(map);
}

int main(int argc, char **argv)
{
	int *ref;
	int **map;

	ref = NULL;
	init(&ref, &map, argc, argv);
	loop(&ref, &map);
	clear(&ref, &map);

	return (0);
}
