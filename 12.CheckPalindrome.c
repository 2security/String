#include<stdio.h>
int main()
	{
		char str[30];
		int c=0,i,j;
		printf("\nEnter the string");
		scanf("%s",str);
		for(i=0;i<str[i]!='\0';i++)
		c++;
		
		for(i=0,j=c-1;i<=j;i++,j--)
		{
			if(str[i]!=str[j])
			break;
		}
		if(i>j)
		printf("\n String is palindrome");
		else
		printf("\n String is not palindrome");
	}

