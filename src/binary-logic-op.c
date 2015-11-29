#include <stdio.h>

int main(){
	int a=63, b=31;
	int binary_op  = a &  b;
	int logical_op = a && b;
	printf("binary: %d, logical: %d\n", binary_op, logical_op);
	return 0;
}

