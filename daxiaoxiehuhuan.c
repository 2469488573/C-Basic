#include <stdio.h>
void main()
{
	char ch;
	scanf("%c",&ch);//输入字符存入变量ch
	ch=(ch>'a'&&ch<='z')?(ch+'A'-'a'):(ch>='A'&&ch<='Z')?(ch+'a'-'A'):ch;
	printf("ch=%c\n",ch);
	scanf("%c",ch);
	 
}
