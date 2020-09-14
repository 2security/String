#include<stdio.h>
int main()
	{
		int i,c=0;;
		char str[30],ch;
		printf("\n Enter the string");
		gets(str);
		
		printf("\n Enter the character");
		scanf("%c",&ch);
		
		for(i=0;i<str[i]!='\0';i++)
			{
				if(str[i]==ch)
					c++;
			}
		printf("\n No of occurrence of %c is =%d",ch,c);
		return 0;
	}
