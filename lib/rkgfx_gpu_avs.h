
typedef unsigned int uint32_t;

typedef struct RKGFX_AVS_context_s {
    uint32_t apiVersion;
    uint32_t numView;
    char * meshFilePath;
    uint32_t inputBufferWidth;
    uint32_t inputBufferHeight;
    uint32_t inputBufferFormat;
    uint32_t inputIsAFBC;
    uint32_t outputBufferWidth;
    uint32_t outputBufferHeight;
    uint32_t outputBufferFormat;
    uint32_t outputIsAFBC;
    uint32_t useFd;
    int* inputFdArray;
    uint32_t useSync;
} RKGFX_AVS_context_t;

typedef enum {
RKGFX_AVS_SUCCESS,
RKGFX_AVS_INVALID_PARAM,
RKGFX_AVS_FAILED,
} RKGFX_AVS_STATUS;

extern "C" RKGFX_AVS_STATUS RKGFX_AVS_init (void* context);
extern "C" RKGFX_AVS_STATUS RKGFX_AVS_resize (void* context);
extern "C" RKGFX_AVS_STATUS RKGFX_AVS_AllProcess (void* context);
extern "C" RKGFX_AVS_STATUS RKGFX_AVS_deinit (void* context);
extern "C" void* RKGFX_AVS_create_sync(void);
extern "C" RKGFX_AVS_STATUS RKGFX_AVS_wait_sync(void* gles_proceess_sync);



