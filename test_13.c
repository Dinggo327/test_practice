#define  _CRT_SECURE_NO_WARNINGS 1
//9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1; i <= 9; i++)  //打印行
	{

		for (j = 1; j <= i; j++)
		{
			sum = i * j;
	        printf("%d * %d = %-2d ", i, j, sum);   //2d :打印两位数字
		}
		printf("\n"); //这个很重要
	}

	return 0;
}





