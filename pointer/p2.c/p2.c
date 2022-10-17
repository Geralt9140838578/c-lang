#include<stdio.h>
void main()
{
	float table[2][3]={{6.3,8.6} , {2.4,5.3,6.7}}
	printf("%p\n",table);
	printf("%p\n",table+1);
	printf("%p\n",*(table+1));
	printf("%p\n",(*(table+1)+1));
	printf("%f\n",*(*(table+1)+1));
	printf("%f\n",*(*(table)+1));
	printf("%f\n",*(*(table+1)));
}
