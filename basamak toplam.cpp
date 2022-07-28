#include <stdio.h>
#include <stdlib.h>


int toplam = 0;

int basamaktoplam(int n) 
{
   
     if (n == 0) 
	 {
       return 0;
     }
     else
     {
  	   toplam= toplam + n%10;
       return basamaktoplam(n/10); 
     }
  
  

  return toplam;
}

int main()
{
  int sayi, result;
  printf("Hesaplanacak sayiyi giriniz:");
  scanf("%d", &sayi);
  basamaktoplam(sayi);
  printf("Basamaklar Toplami= %d\n", toplam);

  return 0;
}


