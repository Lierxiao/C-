#define _CRT_SECURE_NO_WARNINGS
//���Լ������С������
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int tmp=0;
	int k;
	scanf("%d%d", &a, &b);
	k = a * b;
	while (tmp = a % b)
	{
		a = b;
		b = tmp;
	}
	printf("���Լ��=%d\n", b);
	printf("��С������=%d\n", k/b);
	return 0;
}