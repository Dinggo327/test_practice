#define  _CRT_SECURE_NO_WARNINGS 1
//把一个字符串转换成整数

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char str[] = "123ert";
//	int num = atoi(str);  //当第一个字符不能识别为数字时，函数将停止读入输入字符串
//	printf("%d ", num);
//	return 0;
//}

//#include <stdio.h>
//int stringToInt(const char* str) 
//{
//    int num = 0;
//    int sign = 1;
//    int i = 0;
//
//    // 处理符号位
//    if (str[0] == '-')
//    {
//        sign = -1;
//        i = 1;
//    }
//
//    // 遍历字符串中的每个字符
//    while (str[i] != '\0') {
//        // 确保字符是数字
//        if (str[i] >= '0' && str[i] <= '9')
//        {
//            // 将字符转换为数字，并累加到结果中
//            num = num * 10 + (str[i] - '0');
//            i++;
//        }
//        else 
//        {
//            // 非数字字符，退出循环
//            break;
//        }
//    }
//
//    // 加上符号位
//    num = num * sign;
//
//    return num;
//}
//
//int main()
//{
//    char str[] = "12345";  // 代表整数的字符串
//    int num = stringToInt(str);   // 调用自定义的字符串转换函数
//
//    printf("转换后的整数值为: %d\n", num);
//
//    return 0;
//}

#include <stdio.h>
#include <stdbool.h>
#include <limits.h> // For INT_MAX and INT_MIN

int stringToInt(const char* str)
{
    if (str == NULL) 
    {
        printf("Error: 输入为空指针。\n");
        return 0;
    }

    int num = 0;
    int sign = 1;
    int i = 0;

    // 处理符号位
    if (str[0] == '-') 
    {
        sign = -1;
        i = 1;
    }

    // 遍历字符串中的每个字符
    while (str[i] != '\0') 
    {
        // 确保字符是数字
        if (str[i] >= '0' && str[i] <= '9')
        {
            // 处理溢出情况
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (str[i] - '0') > INT_MAX % 10)) 
            {
                printf("Error: 输入超出整数范围。\n");
                return 0;
            }
            // 将字符转换为数字，并累加到结果中
            num = num * 10 + (str[i] - '0');
            i++;
        }
        else 
        {
            // 非数字字符，输出错误信息并返回0
            printf("Error: 输入包含非法字符。\n");
            return 0;
        }
    }

    // 加上符号位
    num = num * sign;

    return num;
}

int main() {
    char str1[] = "12345";  // 有效的整数字符串
    int num1 = stringToInt(str1);
    printf("转换后的整数值为: %d\n", num1);

    char str2[] = "-6789";  // 有效的负数字符串
    int num2 = stringToInt(str2);
    printf("转换后的整数值为: %d\n", num2);

    char str3[] = "abcd";   // 包含非法字符的字符串
    int num3 = stringToInt(str3);

    char* str4 = NULL;      // 空指针输入
    int num4 = stringToInt(str4);

    return 0;
}








