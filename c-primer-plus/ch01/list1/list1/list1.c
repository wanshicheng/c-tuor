#include <stdio.h>
int main(void)
{
	int dogs;

	printf("How many dogs do you have?\n");
	/*
	��VS�в���ʹ��scanf()��scanf()�ڶ�ȡ����ʱ�����߽磬���Կ��ܻ�����ڴ����Խ�硣
	��vc++2005��ʼ��VSϵͳ�ṩ��scanf_s()���ڵ��øú���ʱ�������ṩһ�������Ա�������ȡ����λ�ַ���
	*/
	scanf_s("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);

	return 0;
}
