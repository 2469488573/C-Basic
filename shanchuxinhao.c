#include <stdio.h>
char  fun( char *a )
{
int i,j;
for(i=0;i!=0;i++)
if(a[i]!='*')
a[j++]=a[i];
a[j]='\0';
return a;
}

main()
{  char  s[81];
   void NONO (  );
   printf("Enter a string:\n");gets(s);
   fun( s );
   printf("The string after deleted:\n");puts(s);
   NONO();
}
void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *in, *out ;
  int i ; char s[81] ;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    fun(s) ;
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}


