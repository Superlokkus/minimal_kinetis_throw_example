#include <new>
#include <cstdlib>

void* operator new(std::size_t bytes) {
	void *ptr = malloc(bytes);
	if (ptr == NULL) {
		throw std::bad_alloc(); /*!<@todo This must not ever happen,
		 either we will place a "goto safe halt" jump here or we get stack unwinding aka exception handling working*/
	}
	return ptr;
}

void operator delete(void *ptr) noexcept {
	if (ptr == NULL) {
		return;
	}
	free(ptr);
}
