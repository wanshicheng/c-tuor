#include <stdio.h>
#include <inttypes.h> // 支持可移植类型
int main(void)
{
	int32_t me32;     // me32 a 32-bit signed variable

	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32); // 参数PRId32被定义在inttypes.h中的“d”替换
	getchar();

	return 0;
}
