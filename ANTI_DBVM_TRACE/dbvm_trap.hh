#pragma once
#include <Windows.h>
#include <excpt.h>
#pragma region Shell
#pragma section(".text")
__declspec(allocate(".text"))
__int8 shell[] = { 0x1E /*pop ds (bad)*/ };
#pragma endregion Shell
#define DBVM_TRAP()  __try \
{                                                               \
    reinterpret_cast<void(*)()>(&shell[0])(); \
}                                                         \
 __except (_exception_code() == EXCEPTION_ILLEGAL_INSTRUCTION) \
{                                                              \
     /*fn(args...)*/                                               \
}   
\
