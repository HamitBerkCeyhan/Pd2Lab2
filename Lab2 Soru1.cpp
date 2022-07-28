#include <stdio.h>
#include <stdlib.h>


int toplam=0;
int ortalama=1;
int kalan=0;

int hesapla(int n[],int sayi)
{
      int i=0;
      for(i=0; i<100; i++)
      {
      	if(i==sayi)
      	{
      		break;
		}
		else if(n[i]<60)
		{
			kalan++;
			toplam=toplam+n[i];
		}
		else
		{
			toplam=toplam+n[i];
		}
	  }
	  ortalama=toplam/sayi;
	  printf("Ortalama: %d\n", ortalama);
	  printf("Kalan Ogrenci sayisi: %d\n", kalan);
}


int main(void)
{
	int sayi, A[100], i;
	printf("Ogrenci sayisini giriniz:");
	scanf("%d",&sayi);
	if(sayi<=100)
	{
		for(i=0; i<sayi; i++)
		{
			printf("%d. Ogrencinin Notunu Giriniz: ",i+1);
			scanf("%d", &A[i]);
		}
		hesapla(A,sayi);
	}
	else
	{
		printf("Ogrenci sayisi en fazla 100 olabilir.");
	}
}


