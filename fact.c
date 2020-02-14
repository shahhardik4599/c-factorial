#include<stdio.h>

float factorial(int n);

void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Factorial= %f",factorial(n));
}

float factorial(int n)
{
	float fact;
	if(n==1)
		return 1;
	else
	{
		fact=n*factorial(n-1);
		return fact;
	}
}

