#include<stdio.h>
int main()
{
	char ch;

	printf("请输入一个字符\n");
	scanf_s("%c", &ch);
	printf("这个字符是%c，它的ASCII码是%d", ch, ch);
	getchar();
	getchar();

	return 0;
}