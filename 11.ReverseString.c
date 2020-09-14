#include<stdio.h>
int main()
	{
		char str[30],revstr[30];
		int len,i,j,k;
		printf("\nEnter the string");
		gets(str);
		for(i=0;i<str[i]!='\0';i++)
		len=i;
		k=0;
		for(j=len;j>='\0';j--)
			{
				revstr[k]=str[j];
				k++;
			}
		revstr[i]='\0';
		puts(revstr);
	}

