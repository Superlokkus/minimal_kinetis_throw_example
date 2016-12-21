#include <throwtest.h>

void thrower() {
	try {
		throw 4;
	} catch (...) {
	}
}

extern "C" void throw_test() {
	thrower();
}

