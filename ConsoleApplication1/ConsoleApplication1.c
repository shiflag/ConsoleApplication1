// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdio.h"
void main()
{
	double a, b, d;//定义算式数
	char c;//定义变量符号
	printf("请输入算法 如（3+4）:");//提示输入算式
	scanf("%lf%c%lf", &a, &c, &b);//输入的算式
	switch (c)//switch开关
	{
	case '+': d = a + b; printf("计算结果为：%lf", d); break;//加法
	case '-': d = a - b; printf("计算结果为：%lf", d); break;//减法
	case '*': d = a*b; printf("计算结果为：%lf", d); break;//乘法
	case '/': d = a / b; printf("计算结果为：%lf", d); break;//除法
	default:printf("有误，请重新输入");
	}
}
