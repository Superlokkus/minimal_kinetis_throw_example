/*
 * throwtest.cpp
 * Copyright (c) 2015, Novum engineerING GmbH
 * All rights reserved.
 *
 *  Created on: 21.12.2016
 *      Author: Sören Birth
 */

#include <throwtest.h>

struct destruct_tester {
	int i = 5;
	~destruct_tester() {
		i = 0;
	}
};

void thrower() {
	int i = 3;
	try {
		destruct_tester dt;
		throw 4;
	} catch (...) {
		i = 2;
	}
}

extern "C" void throw_test() {
	thrower();
}

