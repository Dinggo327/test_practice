#define  _CRT_SECURE_NO_WARNINGS 1
//给定一个数组[1, 4, 2, 1, 4, 5, 1, 6]，统计每个数字出现的次数并输出（不重复）
#include<stdio.h>
int main()
{
	int arr[10] = { 1,4,2,1,4,5,1,6 };//给定数组
	int res[10] = { 0 };//新建一个数组，数组的容量其实取决于arr数组里最大元素的值
	for (int i = 0; i < 8; i++)
	{
		res[arr[i]]++;//如果出现了这个元素，这个元素在另一个数组对应位置上面的映射就加1
	}

	for (int i = 0; i < 8; i++)
	{
		if (res[i] > 0)//不重复输出元素
			printf("%d出现的次数为：%d\n", i, res[i]);
	}
	return 0;
}
