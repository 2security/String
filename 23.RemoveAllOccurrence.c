#include<stdio.h>
#include<string.h>
int main()
	{
		int i,pos,j,k;
		char str[30],temp[30],ch;
		printf("\n Enter the string");
		gets(str);
		
		printf("\n Enter the character");
		scanf("%c",&ch);
		
		for(j=0;i<str[j]!='\0';j++);
		
		for(i=0;i<str[i]!='\0';i++)
			{
				if(str[i]==ch)
					{
					for(k=i;k<=j;k++)
						str[k]=str[k+1];	
					j--;
					i--;
					}
			}
		str[i]='\0';
		printf("%s",str);
		return 0;
	}
