#include<stdio.h>
#include<string.h>
struct family
{
	char child[10];
	char father[10];
};

int main()
{
	FILE *ptr;
	int count=0;
	ptr = fopen("2.txt","r");	
	struct family r[5];
	char f[10],temp[10];
	printf("enter the name,whose you want to find the number of grand children\n");
	scanf("%s",f);
	printf("\n");
	for(int i=0; i<5; i++)
	{
		fscanf(ptr,"%s",&r[i].child);
		fscanf(ptr,"%s",&r[i].father);
	}
	
	for(int i=0; i<5; i++)
	{
		printf("%s ",r[i].child);
		printf("%s\n",r[i].father);
	}

	for(int i=0; i<5; i++)
	{
		if(strcmp(f,r[i].father) == 0)
		{
			for(int j=0; j<5; j++)
			{
				if(strcmp(r[i].child , r[j].father) == 0)
				{
					count = count + 1;				
				}
			}
		}
	}
	printf("The number of grandchildren of %s is:%d\n",f,count);
	return 0;
}

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
