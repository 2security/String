#include<stdio.h>
int main()
	{
		char str[20];
		int i=0,v=0,c=0;
		printf("\n Enter the string:: ");
		gets(str);
		
	
		while(str[i]!='\0')
			{
				if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
					v++;
				else
					c++;
					
				i++;
			}
		printf("\n No of vowels in the string %s = %d",str,v);
		printf("\n No of consonants in the string %s = %d",str,c);
		
		return 0;
	}
	
	
