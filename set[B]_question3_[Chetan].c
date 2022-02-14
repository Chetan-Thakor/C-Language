#include<stdio.h>
void convert_binary(int n,int a[8]);
int main()
{
	int n, a[8];
	printf("enter the number, whatever you want\n");
	scanf("%d",&n);
	convert_binary(n,a);
	return 0;
}
void convert_binary(int n,int a[8])
{
	int j,x =0, i;
	for(i=0; n>0; i++)
	{		
		a[i] = n % 2;
		n = n / 2;	
	}
	printf("Before reverse the binary number\n");
	for(int j = i-1; j>=0; j--)
	{
		printf("%d",a[j]);	
	}
	printf("\n");
	printf("After the reverse of binary number\n");
	for(int j=0; j<i; j++)
	{
		printf("%d",a[j]);
	}
	printf("\n");	
}

