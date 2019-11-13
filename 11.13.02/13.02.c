#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
int main()
{
	int a = 0;
	int k = 0;
	//设置随机值
	srand(time(NULL));
	a = rand() % 100;
	printf("游戏开始\n");
	printf("请输入数字:\n");
	while (k != a)
	{
		scanf("%d", &k);
		if (k > a)
		{
			printf("数字大了\n");
		}
		else if (k < a)
		{
			printf("数字小了\n");
		}
		else
		{
			printf("正确\n");
		}
	}
	return 0;
}