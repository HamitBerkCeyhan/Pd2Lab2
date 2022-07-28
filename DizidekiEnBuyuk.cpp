#include <stdio.h>
#include <stdlib.h>

int Eb=0;

int enBuyuk(int n[], int x)
{
	for(int j=0; j<x; j++)
	{
		if(n[j]>Eb)
		{
			Eb=n[j];
		}
		else
		{
			continue;
		}
	}
	
	printf("En Buyuk eleman: %d", Eb);
	return 0;
}



int main(void)
{
    int x;
	printf("Bir dizi boyutu giriniz:");
	scanf("%d", &x);
	int A[x];
	for(int i=0; i<x; i++)
	{
		printf("%d. Elemani giriniz: ",i+1);
		scanf("%d", &A[i]);
	}
	enBuyuk(A,x);
}
