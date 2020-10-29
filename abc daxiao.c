#include<stdio.h>
void main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(c>a)
	{
		temp=a;
		a=c;
		c=temp;
	}
	if(c>b)
	{
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d\n%d\n%d\n",a,b,c);
}
