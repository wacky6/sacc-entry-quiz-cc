#include <stdio.h>

int morph(int a) {
	static int called = 0;
	printf("%d ", called++);
	return a*a;
}

int main() {
	morph(1);
	morph(2);
	morph(3);
	printf("\n");
}
