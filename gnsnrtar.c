#include <stdio.h>
int main()
{
	int a,b,c,d,e,t;
	printf("input the integer ");
	scanf("%d %d %d %d %d",a,b,c,d,e);
	if (b>a)
	{t=a;a=b;b=t;}
	if (c>a)
	{t=a;a=c;c=t;}
	if (d>a)
	{t=a;a=d;d=t;}
	if (e>a)
	{t=a;a=e;e=t:}
	printf("max=%d",a);
	return 0;
}

