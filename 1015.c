#include <stdio.h>
#include <string.h>
#include <math.h>
struct ccd 
{
	 char a [100];
	 long int   b ;
} ;//ע������ķֺ��Ǳ���Ҫ�ģ������������������� 
 int main ()
 {     struct ccd c = {"����999ʽ",99 };
		 		struct ccd d = {"����9999ʽ",999 };
		 			struct ccd e = {"����99999ʽ",1999 };
		 				struct ccd f = {"����9999999ʽ",299000000 };
		 				printf ("��Ը����������廻ȡ���һ���ӵ��Ҹ������𣡣���������������������\n\\\\\n\n\n\n\n\n\\\n �����룺�ǳ�Ը��\n");
		 				char g [20];
		 				scanf("%s",&g[20]);
		 				if(g =="�ǳ�Ը��")
		 				{
						 printf ("������%s\n",c.a);
		 				printf ("�۸�%d��Ԫ\n\n\n",c.b);
		 					printf ("������%s\n",d.a);
		 				printf ("�۸�%d��Ԫ\n\n\n",d.b);
		 					printf ("������%s\n",e.a);
		 				printf ("�۸�%d��Ԫ\n\n\n",e.b);
		 					printf ("������%s\n",f.a);
		 				printf ("�۸�%d��Ԫ\n\n\n",f.b);}
		 				else
						 printf ("��ʧȥ��һ����Ǯ;�Ļ���\n"); 
		 				
 return 0;
 }

