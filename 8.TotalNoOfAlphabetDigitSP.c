#include<stdio.h>
int main()
	{
		char str[20];
		int i=0,a=0,s=0,d=0;
		printf("\n Enter the string:: ");
		gets(str);
		
	
		while(str[i]!='\0')
			{
				if(str[i]>=65&&str[i]<=122)
					a++;
				else if(str[i]>='0'&&str[i]<='9')
					d++;
				else
					s++;
					
				i++;
			}
		printf("\n No of alphabet = %d",a);
		printf("\n No of digit = %d",d);
		printf("\n No of special charecter = %d",s);
		return 0;
	}
	
	
