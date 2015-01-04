//判断一个整数是否是一个素数，是返回1，不是返回0， 
//算法：一个是从2试到n-1；一个是从2试到sqrt（n），第三个利用while 
//程序结构一个是函数返回点在两个地方，一个是最后做一个判断返回什么结果 
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

