#pragma once
#ifndef REF_H
#define REF_H

#include "map.h"
#include "error.h"

#ifndef REF_SIZE
#define REF_SIZE MAP_SIZE * MAP_SIZE
#endif //REF_SIZE

int *refAlloc(int size);
void refClear(int **ref);
int *refGenerate(int argc, char **argv);

#endif //REF_H
