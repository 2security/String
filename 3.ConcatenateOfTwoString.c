#include<stdio.h>
int main()
	{
		char str1[20],str2[20];
		int i=0,len1,j=0,k;
		printf("\n Enter the first string");
		gets(str1);
		printf("\n Enter the second string");
		gets(str2);
		
		for(i=0;str1[i]!='\0';i++)
		i=i+1;
		while(str2[j]!='\0')
			{
				str1[i]=str2[j];
				i++;
				j++;
			}
		str1[i]='\0';
		printf("\n Concatenate of two string is: ");
		puts(str1);
		return 0;
	}
	
