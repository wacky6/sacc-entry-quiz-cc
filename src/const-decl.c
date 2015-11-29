#include <stdio.h>

int main() {
	/* won't compile */
	// char* const s1 = "hello";
	// s1 = "world";

	char const* s2 = "hello";
	s2 = "world";
	
	char* const s3 = "c";
	s3[0] = 'd';    // but fails at runtime!

	/* won't compile */
	// const char* s4 = "c";
	// s4[0] = 'd';
}
