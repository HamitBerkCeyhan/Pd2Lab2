#include <stdio.h>
#include <stdlib.h>

int n;

void kitleIndex(int x,float y)
{
	
	n=x/(y*y);
	
	if(n>=0 && n<=18)
	{	
		printf("Zayif");
	}
	else if(n>=19 && n<=25)
	{
		printf("Normal");
	}
	else if(n>=26 && n<=30)
	{
		printf("Kilolu");
	}
	else
	{
		printf("Obez");
	}
}


int main(void)
{
	float boy; 
	int kilo;
	printf("Boyu giriniz:");
	scanf("%f", &boy);
	printf("Kilonuzu giriniz:");
	scanf("%d", &kilo);
	kitleIndex(kilo,boy);
}
