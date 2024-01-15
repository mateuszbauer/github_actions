set(UT ${CMAKE_PROJECT_NAME}_unit_tests)

set(SOURCE_FILES
	ut_matmul.cpp
)

add_executable(${UT} ${SOURCE_FILES})

target_include_directories(${UT} PRIVATE ${GTEST_INCLUDE_DIRS})

target_link_libraries(${UT}
	PRIVATE
	matmul
	GTest::GTest
)
