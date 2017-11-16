#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("%x, %x, %x", &a, &b, &c);
	
	a = 1; 
	
	b = 2; 
	
	c = a + b;
	getchar();
}