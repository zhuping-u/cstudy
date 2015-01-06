#include <stdio.h>

#define IN 1;
#define OUT 0;
//单词计数算法，状态转换 
int main()
{
	int c,nw,state;
	
	state = OUT;
	nw = 0;
	while((c = getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		}
		else if ( state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d",nw);
} 
