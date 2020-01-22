//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <cstdio>
#include <cstdlib>
#include <cstdint>

namespace test::data {
struct SomeData {
	std::uint32_t one{1};
};
}

int main(void) {
#if defined(EXTENDED_VERSION)
	test::data::SomeData data;

	puts("May I present myself, I'm the simplest of test programs");
#else
	puts("Hello World!!!");
#endif
	return EXIT_SUCCESS;
}
