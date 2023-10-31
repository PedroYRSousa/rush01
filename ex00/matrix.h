#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include "error.h"

#ifndef MATRIX_SIZE
#define MATRIX_SIZE 4
#endif //MATRIX_SIZE

void matrixShow(int **matrix);
int **matrixAlloc(void);
void matrixClear(int ***matrix);

#endif //MATRIX_H
