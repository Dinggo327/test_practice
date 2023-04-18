#define  _CRT_SECURE_NO_WARNINGS 1
//在1-100之间找9出现的次数
#include <stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	for (a = 1; a <= 100; a++)
	{
		//if ((a % 10 == 9)||(a / 10 == 9))  //少算一个
		if (a % 10 == 9)
		{
			count++;
		}
		//else if (a / 10 == 9)//这个也会少算一个
		if (a / 10 == 9)
	    {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}












