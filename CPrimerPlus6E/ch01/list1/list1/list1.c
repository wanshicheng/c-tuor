#include <stdio.h>
int main(void)
{
	int dogs;

	printf("How many dogs do you have?\n");
	/*
	在VS中不能使用scanf()，scanf()在读取数据时不检查边界，所以可能会造成内存访问越界。
	从vc++2005开始，VS系统提供了scanf_s()。在调用该函数时，必须提供一个数字以表明最多读取多少位字符。
	*/
	scanf_s("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);

	return 0;
}
