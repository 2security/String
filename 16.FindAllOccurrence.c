#include<stdio.h>
int main()
	{
		int i,pos;
		char str[30],ch;
		printf("\n Enter the string");
		gets(str);
		
		printf("\n Enter the character");
		scanf("%c",&ch);
		
		for(i=0;i<str[i]!='\0';i++)
			{
				if(str[i]==ch)
					printf("\n occurrence of %c in %d position",ch,i+1);	
			}
		
		return 0;
	}
