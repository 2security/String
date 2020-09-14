#include<stdio.h>
#include<string.h>
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
					pos=i+1;
			}
		printf("\n Last occurrence of %c in %d position",ch,pos);
		return 0;
	}
