#include <stdio.h>
#include<stdlib.h>
void main()
{
	int score,temp;
	char grade;
	for(;;)
 {
	printf("please input the score:\n");
	scanf("%d",&score);
	if(score<0||score>100)
	{
	printf("data error!\n");
	}
	else
	{
	 temp=score/10;
	switch(temp)
	 {
	
	case 10: grade='A';
	case 9: grade='A';break;	
	case 8: grade='B';break;
	case 7: grade='C';break;
	case 6: grade='D';break;
	default: grade='E';break;
	 }
	printf ("%c\n",grade);
	}
 
 }
}
