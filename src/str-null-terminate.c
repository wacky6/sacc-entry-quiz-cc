#include <stdio.h>
#include <string.h>

int main() {
	printf("length = %lu\n", strlen("abc\0"));
	return 0;
}
