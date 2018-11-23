#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	int b[] = { 3, 4, 5, 6, 7, 8, 9 };
	int c[] = { 0, 0, 0, 0, 0, 0, 0 };
	int L = sizeof (a) / sizeof (int);
	printf("ԭ��������a=");
	for (i = 0; i < L; i++)
	{
		printf("%2d", a[i]);
	}
	for (i = 0; i < L; i++)
	{
		c[i] = b[i];
		b[i] = a[i];
		a[i] = c[i];
	}
	printf("\n����������a=");
	for (i = 0; i < L; i++)
	{
		printf("%2d", a[i]);
	}
	system("pause");
	return 0;
}