#include "ut_base.h"
#include <gtest/gtest.h>

#include <errno.h>

TEST_F(ut_base, ut_matmul_null_pointer) {
	float *A = nullptr;
	float *B = nullptr;
	float *C = nullptr;

	int rc = matmul(A, B, C);
	ASSERT_EQ(-EINVAL, rc);
}

int main(int argc, char *argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

