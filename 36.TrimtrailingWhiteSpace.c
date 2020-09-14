#include<stdio.h>
#include<string.h>
int Mystrlen(char *str)
	{
		int i;
		for(i=0;i<str[i]!=0;i++);
		
		return i;
		
	}

char* Trimtrailing(char *str)
	{
		int i=0,j,c,n;
		char *temp;
		c=Mystrlen(str)-1;
		
		while(str[c]==' '||str[c]=='\t'||str[c]=='\n')
			{
				c--;
			}
		str[c+1]='\0';
		
		return str;
	}

int main()
	{
		int i,n;
		char str[50];
		printf("\n Enter the string");
		gets(str);
		
		printf("\n Before trimming::");
		printf("%s",str);
		
		printf("\n After trimming::");
		printf("%s",Trimtrailing(str));
		printf("***");
		return 0;
	}
