#include <stdio.h>

int main() {
	short array[] = {0x0123, 0x4567, 0x89ab, 0xcdef};
	char* ptr     = (char*) &array;
	printf("%x\n", ++ptr[3]);  /*提示：%x输出16进制值 */
}
