#pragma once
#ifndef ARRAY_H
#define ARRAY_H

#include "matrix.h"
#include "error.h"

#ifndef ARRAY_SIZE
#define ARRAY_SIZE (MATRIX_SIZE * MATRIX_SIZE)
#endif //ARRAY_SIZE

void arrayShow(int *array);
int *arrayAlloc(void);
void arrayClear(int **array);

#endif //ARRAY_H
