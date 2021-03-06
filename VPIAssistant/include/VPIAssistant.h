#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __gnu_linux__
    #include <sys/types.h>
#endif

#include <iverilog/vpi_user.h>

/*
    Function: UTF8String.

    This helps conversion from a Swift string to a CString, which is a nightmare otherwise.
*/
void vpi_finish();

#ifdef __cplusplus
}
#endif