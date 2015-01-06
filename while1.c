#include <stdio.h>

/*
这样一种应用场景：预操作->做判断->做处理的三段式，可以简化为下面
注释中的方式，即利用赋值表达式（赋值是一个表达式，并且具有一个值，即赋值操作后左边变量保存的值）
直接在while中实现 
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
