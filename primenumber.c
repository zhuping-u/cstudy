//�ж�һ�������Ƿ���һ���������Ƿ���1�����Ƿ���0�� 
//�㷨��һ���Ǵ�2�Ե�n-1��һ���Ǵ�2�Ե�sqrt��n��������������while 
//����ṹһ���Ǻ������ص��������ط������ᳫ����һ���������һ���жϷ���ʲô��� 
#include <stdio.h>
#include <math.h>

int fun(int a);
int fun1(int a);
int fun2(int a); 

int main()
{
	int n;
	scanf("%d",&n);
	if (fun1(n)) 
		printf("%d is a primenumber.\n",n);
	else
		printf("%d is not a primenumber.\n",n);
}

int fun(int n) 
{
	int i;
	for(i=2;i<n;i++) //ѭ��a-2�� 
	{
		if(n%i == 0) //���������������� 
			break;
	}
	if(i>=n)   //���жϣ�i������n����ʾ������������������ 
		return 1;
	return 0; //�������� 
}

int fun1(int n)
{
	int i,m;
	m = sqrt(n); //���������������Զ�ת�� 
	for(i=2;i<=m;i++) {
		if(a%i == 0)
			break;
			
	}
	if(i>m)
		return 1;
	return 0;
}

int fun2(int n)
{
	int i = 2;
	 //ͬʱ�������ж� �����δ��n�Ҳ��������������ԣ������˳������������˳��������i��ֵ���ж��������˳� 
	while(i<n && n%i)
		i++;
	if (i == n) 
		return 1;
	return 0;
} 

