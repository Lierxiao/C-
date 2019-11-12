#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char str[] = "hello";
	int len;
	len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}