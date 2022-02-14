#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int l;
	gets(s);
	l = strlen(s);
	for(int i=0; i<l-1; i++)
	{
		if(s[i] == s[i+1])
		{
			for(int j=i; s[j]!='\0'; j++)
			{
				s[j] = s[j+2];	
			}
			i = i-2;
			if(i<0)
			{
				i = -1;
			}
		l = strlen(s);
		}	
	}
	if(strlen(s) == 0)
	{
		printf("Empty String\n");
	}
	
	else
	{
		printf("%s\n",s);
	}
	return 0;
}
