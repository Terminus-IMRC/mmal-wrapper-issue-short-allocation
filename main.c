#include <interface/mmal/mmal.h>
#include <interface/mmal/util/mmal_component_wrapper.h>
#include <stdio.h>
#include <stdlib.h>

#define _check_mmal(x) \
    do { \
        MMAL_STATUS_T status = ((x)); \
        if (status != MMAL_SUCCESS) { \
            fprintf(stderr, "%s:%d: MMAL call failed: 0x%08x\n", \
                    __FILE__, __LINE__, status); \
            exit(EXIT_FAILURE); \
        } \
    } while (0)

int main()
{
    MMAL_WRAPPER_T *cpw_splitter = NULL;
    _check_mmal(mmal_wrapper_create(&cpw_splitter, "vc.ril.video_splitter"));
    _check_mmal(mmal_wrapper_destroy(cpw_splitter));
    fprintf(stderr, "Successfully done!\n");
    return 0;
}
