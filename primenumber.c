//判断一个整数是否是一个素数，是返回1，不是返回0， 
//算法：一个是从2试到n-1；一个是从2试到sqrt（n），第三个利用while 
//程序结构一个是函数返回点在两个地方（不提倡），一个是最后做一个判断返回什么结果 
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
	for(i=2;i<n;i++) //循环a-2次 
	{
		if(n%i == 0) //能整除，不是素数 
			break;
	}
	if(i>=n)   //做判断，i自增到n，表示都不能整除，是素数 
		return 1;
	return 0; //不是素数 
}

int fun1(int n)
{
	int i,m;
	m = sqrt(n); //浮点数到整数的自动转换 
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
	 //同时做两个判断 ，如果未到n且不能整除，继续试，到，退出，能整除，退出，最后用i的值来判断是那种退出 
	while(i<n && n%i)
		i++;
	if (i == n) 
		return 1;
	return 0;
} 

