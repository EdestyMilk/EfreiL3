#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int c=0;
int h;
int hs=0;
int s=0;
int ss;
int cs=1;
int main(void)
{
	printf("Hauteur ?");
	scanf("%d", &hs);
	ss=hs-1;
	while(h < hs)
	{
		c=0;
		s=0;
		while(s < ss)
		{
			printf(" ");
			s=s+1;
		}
		while(c < cs)
		{
			printf("*");
			c=c+2;
		}
		printf("\n");
		cs=cs+4;
		h=h+1;
		ss=ss-1;
	}

	return 0;
}