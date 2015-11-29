#include <stdio.h>

int main() {
	char mtx[3][4] = {
		'0', '1', '2', '3', '4', '5',
		'6', '7', '8', '9', 'a', 'b'
	};
	for (int i=0; i!=2; ++i)
		for (int j=0; j!=2; ++j)
			putchar(mtx[i][j]);
	puts("");
}
