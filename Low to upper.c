#include<stdio.h>
#include<conio.h>
int main()
{	
	char ch;
	printf("enter the character");
	scanf("%c",ch);
	if((ch>=65)&&(ch<=90))
	{
		ch=ch+32;
		printf("character in lower case: %c",ch);
	}
	else if((ch>=97)&&(ch<=122))
	{
		ch=ch-32;
		printf("character in upper case: %c",ch);
	}
	else
		printf("Invalid character");
	
	getch();
	return 0;
}
