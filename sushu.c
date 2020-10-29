#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,m;
	scanf("%d",&n);
	m=sqrt(n);
	for(i=2;i<n;i++)
	if(n%i==0)break;
	if(i>m)printf("%d shi sushu",n);
	else printf("%d bu shi sushu",n);
	
}
