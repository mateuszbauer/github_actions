
add_library(matmul STATIC
	matmul.c
)

target_include_directories(matmul
	PUBLIC
	${PROJECT_SOURCE_DIR}/include
)
