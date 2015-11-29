#include <stdio.h>

int main() {
	int  n = 0;
	int* ptr = (int*)0; 
	/* 友情提醒： 访问ptr指针指向的元素让程序崩溃喔！ */

	if ( n=1 || *ptr>=2 )
		printf("hello world!\n");    // C is fun!
	else
		printf("goodbye cruel world\n");  // C is boring, goodbye!
	return 0;
}
