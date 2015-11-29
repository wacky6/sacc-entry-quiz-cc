#include <stdio.h>
#include <stdlib.h>

int arr[4] = {3, 2, 5, 1};
int cmp(const void* pa, const void* pb) {
	return (*(const int*)pa) - (*(const int*)pb);
}

int main() {
	qsort(arr, 4, sizeof(int), cmp);
	for (int i=0; i!=4; ++i) {
		printf("%d\n", arr[i]);
	}
}
