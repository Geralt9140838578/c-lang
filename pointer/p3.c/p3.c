#include<stdio.h>
void main()
{
	char *color[6]={"red","white","blue","green","black","yellow"};
	printf("%p\n",color);
	printf("%s\n",*color);
	printf("%s\n",*(color+2));
        printf("%s\n",*(color+5));
	printf("%p\n",color[5]);
        printf("%p\n",color+1);
}
