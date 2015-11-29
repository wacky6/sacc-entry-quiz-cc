#include <stdio.h>

int main() {
	short a = 32767;
	short b = 32767;
	++a;
	printf("%d %d\n", a, b+1);
}
