//int fun(int m, int n)//计算m的n次方
//{
//	if (n != 0)
//		return m * fun(m, n - 1);
//	else
//	{
//		return 1;
//	}
//}
//void main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)//这里也可以修改范围
//	{
//		int tmp = i;
//		int n = 0;//计算当前tmp的位数n
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		int sum = 0;//求和
//		tmp = i;//重新将tmp赋值i
//		while (tmp)
//		{
//			int m = tmp % 10;//m保存当前m的个位数
//			int res = fun(m, n);//调用函数计算每个数的次方
//			tmp /= 10;//tmp左移
//			sum += res;//各个数的次方和
//		}
//		//判断
//		if (sum == i)
//			printf("%d是水仙数\n",i);
//	}
//}


//用c语言输出一个菱形
//#include<stdio.h>
//int main()
//{
//	int i, j, k;//定义菱形行数i，每行输出次数j，每行中输出空格计数器k
//	for (i = 1; i <= 4; i++)
//	{
//		k = 1;//空格计数器
//		for (j = 1; j <= i + 3; j++)//每行输出4~7次
//		{
//			if (k <= 4 - i)
//			{
//				printf(" ");
//				k++;
//			}
//			else printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 3; i++)//下半部分有三行
//	{
//		k = 1;//计数器
//		for (j = 1; j <= 7 - i; j++)
//		{
//			if (k <= i)
//			{
//				printf(" ");
//				k++;
//			}
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}