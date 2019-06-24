#include<stdio.h>
#include<conio.h>
void _main()
{

	float x1, x2, result;
	char c;
	while (1)
	{
		printf("请输入第一个数：\n");
		scanf("%f", &x1);
		
		printf("请输入运算操作（+ - * /）或q退出：\n");
		/*c=getche();
		printf("\n");*/
		scanf("%c", &c);

		printf("请输入第二个数：\n");
		scanf("%f", &x2);

		//scanf("%f%c%f", &x1, &c, &x2);
		switch (c)
		{
			case '+':
				printf("加法\n");
				result = x1 + x2;
				printf("%f + %f = %f\n", x1, x2, result);
				break;

			case '-':
				printf("减法\n");
				result = x1 - x2;
				printf("%f - %f = %f\n", x1, x2, result);
				break;

			case '*':
				printf("乘法\n");
				result = x1 * x2;
				printf("%f * %f = %f\n", x1, x2, result);
				break;

			case '/':
				printf("除法\n");
				if (x2 == 0)
				{
					printf("除数不能为0.\n");
				}
				else
				{
					result = x1 / x2;
					printf("%f / %f = %f\n", x1, x2, result);
				}
				break;
			case'q':
				printf("程序将退出计算\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	}


}

