#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c = 1;
	float a = 0 , b = 0 ;
	for (b = 1; b <= 100; b++)
	{
		a = a + c * (1 / b);
		c = -c;
	}
	printf("�����1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ\n");
	printf("%f\n", a);
	system("pause");
	return 0;
}
