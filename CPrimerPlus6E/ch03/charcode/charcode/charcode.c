#include<stdio.h>
int main()
{
	char ch;

	printf("������һ���ַ�\n");
	scanf_s("%c", &ch);
	printf("����ַ���%c������ASCII����%d", ch, ch);
	getchar();
	getchar();

	return 0;
}