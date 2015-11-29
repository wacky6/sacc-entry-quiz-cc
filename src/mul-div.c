#include <stdio.h>
/* 提示：F(v) 把v转换为浮点数 */
#define F(v) ((float)(v))
int main() {
	printf( "%.2f %.2f\n", F(3/2), F(3/2.0) );
}
