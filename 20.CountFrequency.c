#include<stdio.h>
#define size 255

int main()
	{
		int freq[size],i,c=0,t;
		char str[size],ch;
		printf("\n Enter the string");
		gets(str);
		
		for(i=0;i<size;i++)
				freq[i]=0;
				
		for(i=0;i<str[i]!='\0';i++)
			{
				if(str[i]>='a' && str[i]<='z')
            		freq[str[i] - 97]++;
       			 else if(str[i]>='A' && str[i]<='Z')
            		freq[str[i] - 65]++;
			}
			
		for(i=0;i<size;i++)
			{
				if(freq[i]!=0)
						printf("\n Frequency of %c is %d ",i+97,freq[i]);
			}
		return 0;
	}
