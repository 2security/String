#include<stdio.h>

char *removeDuplicate(char str[], int n) 
	{ 
   	int j,i,index = 0;      
   	for(i=0;i<n;i++) 
		{ 
     	for(j=0;j<i;j++)  
        	if(str[i]==str[j]) 
           		break; 
       
     	if (j == i) 
        	str[index++] = str[i]; 
   		}
	str[index]="\0";
   	return str; 
	}	 
  
// Driver code 
int main() 
	{	 
	char str[100];
	
	int i;
	
	printf("\n Enter the string");
	gets(str);
	
	for(i=0;i<str[i]!='\0';i++);

   	printf("%s",removeDuplicate(str, i)); 
   	return 0; 
	}	 
