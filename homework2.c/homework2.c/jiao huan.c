#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 10, b = 20, temp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10, b = 20;
	    printf("a = %d,b=%d\n",a, b);
	    a = a^b;                                      // ^Ϊ��������������"��ͬΪ0������Ϊ1"
		b = a^b;                                      // 10�Ķ�����Ϊ  1010 -a
		a = a^b;                                      // 20�Ķ�����Ϊ 10100 -b
		printf("a = %d,b=%d\n", a, b);                // a = a^b   Ϊ 11110    a��b��˭�����ֵ����������һ����
		system("pause");                              // b = a^b   Ϊ 01010   -10
 		return 0;                                     // a = a^b   Ϊ 10100   -20

}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int max = 0;
//	for(i=0; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for(i=1; i<10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d\n",&a,&b,&c);
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//
//	while(c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
//
//
