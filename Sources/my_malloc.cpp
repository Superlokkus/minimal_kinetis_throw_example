#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

static char heap[512];
static unsigned pos = 0;

void* malloc(size_t size) {
	void *ret = heap + pos;
	pos += size;
	return ret;
}
void free(void* ptr) {

}

#ifdef __cplusplus
}
#endif
