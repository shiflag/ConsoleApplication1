// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdio.h"
void main()
{
	double a, b, d;//������ʽ��
	char c;//�����������
	printf("�������㷨 �磨3+4��:");//��ʾ������ʽ
	scanf("%lf%c%lf", &a, &c, &b);//�������ʽ
	switch (c)//switch����
	{
	case '+': d = a + b; printf("������Ϊ��%lf", d); break;//�ӷ�
	case '-': d = a - b; printf("������Ϊ��%lf", d); break;//����
	case '*': d = a*b; printf("������Ϊ��%lf", d); break;//�˷�
	case '/': d = a / b; printf("������Ϊ��%lf", d); break;//����
	default:printf("��������������");
	}
}
