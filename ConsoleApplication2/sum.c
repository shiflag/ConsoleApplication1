//1、计算1 - 100之和(while实现)
# include <stdio.h>
int main()
{
	int i = 1, sum = 0;

	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}

	printf("sum = %d\n", sum);

	return 0;
}

//2、打印1 - 100所有偶数并计算个数(for实现)
#include <stdio.h>
int main()
{
	int i, count = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0)
		{
			count++;
			printf("%d是偶数 \n", i);
		}
	}
	printf("总共有偶数%d个", count);
	return 0;
}

//3、九九乘法口诀
#include <stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 9; i++)
	{

		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}

//4.1、打印斐波那契数列前10项并求前10项和
#include <stdio.h>
int main()
{
	int a =1, b = 1, c = 0, i, sum = 0;
	printf("%d\t%d\t",a,b);
	for (i = 3; i <= 10; i++)
	{
		c = a + b;
		a = b;
		b = c;

		sum += c;
		printf("%d\t", c);
	}
	printf("\n斐波那契数列前10项和是%d", sum + 2);
	return 0;
}

//4.2、打印斐波那契数列前10项并求前10项和(数组实现)
#include <stdio.h>
int main()
{
	int a[10] = { 1,1 }, i, sum = 0;

	for (i = 2; i < 10; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}

	for (i = 0; i < 10; i++)
	{
		sum += a[i];
		printf("%d\n", a[i]);
	}

	printf("斐波那契数列前10项和是%d", sum);

	return 0;
}

//5、打印100以内所有素数并统计素数个数
#include <stdio.h>
int main()
{
	int i, j, count1 = 0, count2 = 0;
	for (i = 2; i <= 100; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				count1++;
			}
		}
		if (count1 == 2)
		{
			count2++;
			printf("%d是素数 \n", i);
		}
		count1 = 0;
	}

	printf("总共有素数%d个", count2);

	return 0;
}

//6、打印1000 - 9999之间的闰年并统计闰年个数
#include <stdio.h>
int main()
{
	int i, count = 0;

	for (i = 1000; i <= 9999; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d是闰年\n", i);
			count++;
		}
	}

	printf("总共有闰年%d个", count);

	return 0;
}

//7、输入10个元素存入到一维数组，用冒泡法从小到大排列输出
#include<stdio.h> 
int main()
{

	int a[10];

	int i, j, tmp;

	printf("请输入10个数字:\n");

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] >a[i + 1]) /*从大到小排序只要改成a[i]<a[i+1]即可*/
			{

				tmp = a[i];

				a[i] = a[i + 1];

				a[i + 1] = tmp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}

}

//8、输入两个字符串，将后面的字符串追加到前一个后面后输出新字符串(不能用strlen、strcpy函数)
#include<stdio.h> 
int main()
{

	char str1[100], str2[100], str3[300];
	int i, j, len1, len2;

	printf("请输入字符串1：");
	gets(str1);
	printf("请输入字符串2：");
	gets(str2);

	// 计算str1的长度
	while (str1[i] != '\0')
	{
		len1++;
		i++;
	}

	// 计算str2的长度
	while (str2[j] != '\0')
	{
		len2++;
		j++;
	}

	for (i = 0; i < len1; i++)
	{
		str3[i] = str1[i];
	}

	for (j = len1; i < len1 + len2; j++)
	{
		str3[j] = str2[j - len1];
	}

	str3[len1 + len2] = '\0';

	puts(str3);

	return 0;

}

//9、输入一个3行3列的二维数组，求数组的最大值和所在的位置
#include<stdio.h> 
int main()
{
	int a[3][3],i,j;
	int max = a[0][0], row = 0, rol = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				rol = j;
			}
		}
	}

	printf("最大值是%d\n", max);
	printf("在第%d行第%d列\n", row, rol);

	return 0;

}



