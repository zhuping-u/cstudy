#include <stdio.h>

/*
����һ��Ӧ�ó�����Ԥ����->���ж�->�����������ʽ�����Լ�Ϊ����
ע���еķ�ʽ�������ø�ֵ���ʽ����ֵ��һ�����ʽ�����Ҿ���һ��ֵ������ֵ��������߱��������ֵ��
ֱ����while��ʵ�� 
*/
main()
{
	int c;
	
	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
	
	/*
	while ((c = getchar()) != EOF)
		putchar(c);
	*/
} 
