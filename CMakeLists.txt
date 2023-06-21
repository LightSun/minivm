cmake_minimum_required(VERSION 3.5)

project(minivm LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -fprofile-generate/-fprofile-use
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fomit-frame-pointer -fno-stack-protector")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fomit-frame-pointer -fno-stack-protector")

#file(GLOB_RECURSE SRC_MAIN main/*.h main/*.c)
file(GLOB_RECURSE SRC_VM vm/*.h vm/*.c)

add_library(minivm
    ${SRC_VM})

target_link_libraries(minivm m)

# asm
add_executable(minivm-asm
    main/asm.c
    )
target_link_libraries(minivm-asm minivm)

# js
add_executable(vm2js
    main/js.c
    )
target_link_libraries(vm2js minivm)

# run
add_executable(minivm-run
    main/run.c
    )
target_link_libraries(minivm-run minivm)

# self
add_executable(minivm-self
    main/self.c
    )
target_link_libraries(minivm-self minivm)

