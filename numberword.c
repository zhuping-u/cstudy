#include <stdio.h>

#define IN 1;
#define OUT 0;
//���ʼ����㷨��״̬ת�� 
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
