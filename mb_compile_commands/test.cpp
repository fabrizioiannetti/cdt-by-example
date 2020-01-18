//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <cstdio>
#include <cstdlib>

int main(void) {
#if defined(EXTENDED_VERSION)
	puts("May I present myself, I'm the simplest of test programs");
#else
	puts("Hello World!!!");
#endif
	return EXIT_SUCCESS;
}
