#include<stdio.h>

main()
{
	char email[100]="varshilkhachariya@gmail.com";
	char password[100]="123456789";
	char email1[100];
	char password1[100];
	
	printf("enter your email:");
	gets(email1);
	
	printf("enter your password:");
	gets(password1);
	


	if(strcmp(email,email1)==0)
	{
		if(strcmp(password,password1)==0)
		{
			printf("lodin successful...\n");
		}
		else
		{
			printf("plz enter  correct password");
		}
		
	}
	else
    {
		printf("plz enter correct email or password.\n");
    }
    
}









