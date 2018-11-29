#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, sum = 0, i = 0;
	scanf("%d", &a);
	for (i = 0; i <= 5; i++)
	{
		b = b * 10 + a;
		sum += b;

	}
	printf("%d", sum);
	system("pause");
	return 0;
}