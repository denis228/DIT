#include<stdio.h>
//учебная программа
//слияние 2 программ (division и master)
int main()
{
	int a, b, c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a+b;
	printf("c=%d\n",c);
	c=a-b;
	printf("c=%d\n",c);
	c=a*b;
	printf("c=%d\n", c);
	c=a/b;
	printf("c=%d\n",c);
	return 0;
}