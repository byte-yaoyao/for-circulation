//int fun(int m, int n)//����m��n�η�
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
//	for (i = 1; i < 100000; i++)//����Ҳ�����޸ķ�Χ
//	{
//		int tmp = i;
//		int n = 0;//���㵱ǰtmp��λ��n
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			n++;
//		}
//		int sum = 0;//���
//		tmp = i;//���½�tmp��ֵi
//		while (tmp)
//		{
//			int m = tmp % 10;//m���浱ǰm�ĸ�λ��
//			int res = fun(m, n);//���ú�������ÿ�����Ĵη�
//			tmp /= 10;//tmp����
//			sum += res;//�������Ĵη���
//		}
//		//�ж�
//		if (sum == i)
//			printf("%d��ˮ����\n",i);
//	}
//}


//��c�������һ������
//#include<stdio.h>
//int main()
//{
//	int i, j, k;//������������i��ÿ���������j��ÿ��������ո������k
//	for (i = 1; i <= 4; i++)
//	{
//		k = 1;//�ո������
//		for (j = 1; j <= i + 3; j++)//ÿ�����4~7��
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
//	for (i = 1; i <= 3; i++)//�°벿��������
//	{
//		k = 1;//������
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