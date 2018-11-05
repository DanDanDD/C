#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 100;
	for (i = 100; i <= 200; i++)
	{
		int j = 2;
		for (j = 2; j<i/2; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j >= i/2)
			printf("%d ", i);
	}
	printf("\n");
	system("pause");
	return 0;
}