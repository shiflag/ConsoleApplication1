#include<stdio.h>
#include<conio.h>
void _main()
{

	float x1, x2, result;
	char c;
	while (1)
	{
		printf("�������һ������\n");
		scanf("%f", &x1);
		
		printf("���������������+ - * /����q�˳���\n");
		/*c=getche();
		printf("\n");*/
		scanf("%c", &c);

		printf("������ڶ�������\n");
		scanf("%f", &x2);

		//scanf("%f%c%f", &x1, &c, &x2);
		switch (c)
		{
			case '+':
				printf("�ӷ�\n");
				result = x1 + x2;
				printf("%f + %f = %f\n", x1, x2, result);
				break;

			case '-':
				printf("����\n");
				result = x1 - x2;
				printf("%f - %f = %f\n", x1, x2, result);
				break;

			case '*':
				printf("�˷�\n");
				result = x1 * x2;
				printf("%f * %f = %f\n", x1, x2, result);
				break;

			case '/':
				printf("����\n");
				if (x2 == 0)
				{
					printf("��������Ϊ0.\n");
				}
				else
				{
					result = x1 / x2;
					printf("%f / %f = %f\n", x1, x2, result);
				}
				break;
			case'q':
				printf("�����˳�����\n");
				break;
			default:
				printf("�����������������\n");
				break;
		}
	}


}

