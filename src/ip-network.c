/* C99 required 
 * won't work in VC6
 *
 *   1. %hhu specifier
 *   2. for-loop initial declaration
 *
 * gcc-flag: "-std=c99"
 */

#include <stdio.h>
#include <stdint.h>

#define u32 uint32_t
#define u8  uint8_t

int main() {
	// test data
	u32 ip4 = 0xffffffff;
	u8 prefix = 24;

	// sugar to read each 8bit segment
	u8* seg = (u8*)&ip4;

	// read each 8bit segment
	scanf("%hhu.%hhu.%hhu.%hhu/%hhu", seg+3, seg+2, seg+1, seg+0, &prefix);
	
	// set each unmasked bits to zero
	for (int bit = 0; bit!=32-prefix; ++bit)
		ip4 = ip4 & ~(1<<bit);
	
	printf("%hhu.%hhu.%hhu.%hhu\n",seg[3], seg[2], seg[1], seg[0]);
}
