#include <matmul.h>
#include <errno.h>

int matmul(float *A, float *B, float *C) {
	if (A == NULL || B == NULL || C == NULL) {
		return -EINVAL;
	}

	for (size_t i = 0; i < MATMUL_MAX_SIZE; i++) {
		for (size_t j = 0; j < MATMUL_MAX_SIZE; j++) {
			float y = 0.0f;
			for (size_t k = 0; k < MATMUL_MAX_SIZE; k++) {
				y += MATMUL_AT(A, i, k) * MATMUL_AT(B, k, j);
			}
			MATMUL_AT(C, i, j) = y;
		}
	}

	return 0;
}

