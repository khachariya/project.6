#include<stdio.h>

main()
{
	char s[100];
	int length=0, palindrome=1;
	int i,j;
	
	printf("enter  string:");
	scanf("%s",s);
	
	for(i = 0;s[i] !='\0';i++)
	
	{
		length++;
	}
	for(i=0,j=length-1;i< j;i++,j--)
	{
		if(s[i]!=s[j])
		 {
		 	palindrome=0;
		 	break;
		 }  
	}
	if(palindrome)
	{
		printf("the string is a palindrome.\n");
	}
	else
	{
		printf("the string is not a palindrome.\n");
	}
	
}
