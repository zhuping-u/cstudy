//�ж�һ�������Ƿ���һ���������Ƿ���1�����Ƿ���0�� 
//�㷨��һ���Ǵ�2�Ե�n-1��һ���Ǵ�2�Ե�sqrt��n��������������while 
//����ṹһ���Ǻ������ص��������ط���һ���������һ���жϷ���ʲô��� 
#include <stdio.h>

int fun(int a);

int main()
{
	int a;
	scanf("%d",&a);
	if (fun(a)) 
		printf("%d is a .\n",a);
	else
		printf("%d is not a .\n",a);
}

int fun(int a) 
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i == 0)
			return 0;
	}
	return 1;
}

int fun2(int a)
{
	int i,m;
	m = sqrt(a);
	for(i=2;i<=m;i++) {
		if(a%i == 0)
			break;
			
	}
	if(i>m)
		return 1;
	else
		return 0;
}

//��2�Ե�a������%���㣬���ж��Ƿ����������ж����˼��Σ�
//�������a�����������������a����������
//���͵�ÿ���ж�ǰ��һ��ǰ���� 
int fun2(int a)
{
	int i = 2;
	while(i<=a && a%i)
		i++;
	if (i == a) 
		return 1;
	else
		return 0;
} 

