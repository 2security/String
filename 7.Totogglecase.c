#include<stdio.h>
char *Mytotogglecase(char *str)
	{
		int i=0;
		while(str[i]!='\0')
			{
				if(str[i]>=65&&str[i]<=90)
					str[i]=str[i]+32;
				else if(str[i]>=97&&str[i]<=122)
					str[i]=str[i]-32;
				i++;
			}
		return str;
	}
int main()
	{
		char str1[20];
		printf("\n Enter the first string:: ");
		gets(str1);
		
		printf("\n Converted string in toggle case:: ");
		puts(Mytotogglecase(str1));
		return 0;
	}
	
	
