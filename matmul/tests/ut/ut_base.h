#ifndef _UT_BASE_H_
#define _UT_BASE_H_

#include <gtest/gtest.h>

#ifdef __cplusplus
extern "C"{
#endif

#include <matmul.h>

#ifdef __cplusplus
}
#endif

class ut_base : public ::testing::Test {};


#endif /* _UT_BASE_H_ */

