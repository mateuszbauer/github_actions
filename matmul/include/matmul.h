#ifndef _MATMUL_H_
#define _MATMUL_H_

#include <stdint.h>
#include <stddef.h>

#define MATMUL_MAX_SIZE (1024)

#define MATMUL_AT(M, i, j) (M[i * MATMUL_MAX_SIZE + j])

int matmul(float *A, float *B, float *C);

#endif /* _MATMUL_H_ */

