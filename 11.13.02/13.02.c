#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
int main()
{
	int a = 0;
	int k = 0;
	//�������ֵ
	srand(time(NULL));
	a = rand() % 100;
	printf("��Ϸ��ʼ\n");
	printf("����������:\n");
	while (k != a)
	{
		scanf("%d", &k);
		if (k > a)
		{
			printf("���ִ���\n");
		}
		else if (k < a)
		{
			printf("����С��\n");
		}
		else
		{
			printf("��ȷ\n");
		}
	}
	return 0;
}