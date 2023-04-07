#define  _CRT_SECURE_NO_WARNINGS 1
//打印1000-2000的闰年
//能被4整除却不能被100整除或能被400整除的年份就是闰年
#include <stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	for (n = 1000; n <= 2000; n++)
	{
		if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		{
			printf("%d ", n);
		count++;
		}
	}
	printf("\n总数为：%d\n", count);
	return 0;
}

//打印100-200之间的素数
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
     //在2->i-1之间试除
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1; //假设i就是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0; //不是素数
				break;
			}
		}
		if (flag == 1) //是素数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n总数是：%d", count);
	return 0;
}
//
//优化：
//如果一个数可以写成m==a*b
//a和b中至少有一个数字是<=开平方m的
//sqrt->开平方函数	-math.h头文件
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	//for (i = 100; i <= 200; i++)
	for (i = 101; i <= 200; i+=2)   //最优解
	{
		int j = 0;
		int flag = 1; //假设i就是素数
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0; //不是素数
				break;
			}
		}
		if (flag == 1) //是素数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n总数是：%d", count);
	return 0;
}






