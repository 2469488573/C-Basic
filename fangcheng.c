#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double a,b,c,d,x0,x1,x2;
	printf("input the a b c\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0)
	{
		printf("a can not be 0!\n");
		exit (0);
	}
	else
	{
		d=b*b-4*a*c;
			if(d<0)
			{
				printf("no real roots\n");
			}
			else if(d==0)
			{
				x0=-b/(2*a);
				printf("x0=%lf\n",x0);
			}
			else if(d>0)
			{
				x1=(-b+sqrt(d))/(2*a);
			    x2=(-b-sqrt(d))/(2*a);
			    printf(" x1=%lf\n x2=%lf\n",x1,x2);
			}
			return 0;
	}
	system("pause");
}
