#include<stdio.h>
void main()
{
	int x[8]={3,2,4,5,7,8,2,1};
	printf("%d\n",x);
	printf("%d\n",x+1);
	printf("%d\n",x+2);
	printf("%d\n",*x);
	printf("%d\n",*x+1);
	printf("%d\n",*x+2);
	printf("%d\n",(*x+2));
	printf("%d\n",*(x+2));
	printf("%d\n",*(x+1));
}
