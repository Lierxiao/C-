#define _CRT_SECURE_NO_WARNINGS 1
 //��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int b = 0;
	int j = 0;
	for (i = 1; i <= 100; i++)
	{
		a = i % 10;
		if (a == 9)
		{
			j++;
		}
		b = i / 10;
		 if (b == 9)
		{
			j++;
		}
		
	}
	printf("%d", j);

	return 0;
}
