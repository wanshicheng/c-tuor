#include<stdio.h>

int main()
{	
	// printf("\a"); //����������
	printf("Hello World!");
	printf("\n");
	printf("Hello World!");
	printf("\a"); //�˸�
	// ASCII����
	putchar(101);
	putchar("\x41");
	putchar("\102");
	getchar();
}