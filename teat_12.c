#define  _CRT_SECURE_NO_WARNINGS 1
//求几个整数中最大值
#include <stdio.h>
int main()
{
	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	//	int Max = 0;  //错误的写法
	int Max = arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[9];
		}
	}
	printf("%d\n", Max);
	return 0;
}































