#include<stdio.h>

int main()
{	
	// printf("\a"); //·¢³ö·äÃùÉù
	printf("Hello World!");
	printf("\n");
	printf("Hello World!");
	printf("\a"); //ÍË¸ñ
	// ASCII±àÂë
	putchar(101);
	putchar("\x41");
	putchar("\102");
	getchar();
}