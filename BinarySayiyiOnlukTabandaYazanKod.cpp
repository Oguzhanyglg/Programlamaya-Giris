#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,n,toplam=0,basamak;
	printf("yalnizca sifir ve birlerden olusan bir sayi giriniz : ");
	scanf("%d", &n);
	while(n>0)
		{
			printf("basamak degeriyle carpilacak sayinin taban degerini giriniz : ");
			scanf("%d", &a);
			printf("basamak degegiyle carpilacak sayinin us degerinin degerini giriniz : ");
            scanf("%d", &b);
			c=pow(a,b);
			basamak=n%10;
			toplam=toplam + basamak*c;
			n=n/10;
		}
		printf("onluk tabandaki karsiligi : %d", toplam);
	}
	
}
