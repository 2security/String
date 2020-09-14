#include<stdio.h>
#include<string.h>
int main()
	{
		int i,n;
		char str[30];
		printf("\n Enter the string");
		gets(str);
		
		i=0;
		while(str[i]!='\0')
			{
			i++;
			}
		printf("\n Length of %s is %d: ",str,i);
		return 0;
	}
