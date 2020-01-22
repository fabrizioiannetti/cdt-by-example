
#include <cstdio>
#include <stdlib.h> // cstdlib uses #include_next to include stdlib.h
#include <test_lib.h>

int main(void) {
#if defined(EXTENDED_VERSION)
	puts("May I present myself, I'm the simplest of test programs");
#else
	puts("Hello World!!!");
#endif

	test::algo::computeEverything();

	return EXIT_SUCCESS;
}
