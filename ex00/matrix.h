#pragma once
#ifndef MATRIX_H
#define MATRIX_H

#include "error.h"

#ifndef MATRIX_SIZE
#define MATRIX_SIZE 4
#endif //MATRIX_SIZE

#ifndef ONE_REF
#define ONE_REF 0b00010000
#endif //ONE_REF
#ifndef TWO_REF
#define TWO_REF 0b00100000
#endif //TWO_REF
#ifndef THREE_REF
#define THREE_REF 0b01000000
#endif //THREE_REF
#ifndef FOUR_REF
#define FOUR_REF 0b10000000
#endif //FOUR_REF

typedef struct s_matrix
{
	int raw;
	int value;
} t_matrix;

void matrixShow(t_matrix **matrix);
t_matrix **matrixAlloc(void);
void matrixClear(t_matrix ***matrix);

#endif //MATRIX_H
