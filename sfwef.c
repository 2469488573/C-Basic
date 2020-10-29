#include<stdio.h>
#include<stdlib.h>
int main()
{
	long s,t=0,a;
    printf("input the integer");
	scanf("%d",&s);
	for(;s!=0;)
	{
		a=S%10;
		s=s/10;
		if (a%2==0)
			{t=t*10+a;}
	}
	printf("%d",t);
	system("pause");
	return 0;
}



