#include <stdio.h>
int main()
{
	int a,b,x,y,c,ebob,i,j,eb1,eb2;
  printf("ebobu bulunacak iki sayiyi giriniz : ")
	scanf("%d%d", &a, &b);
	if(a>b)
	{
		for(int i=1;i<=a;i++)
		{
			if(a%i==0)
			{
				eb1=i;
			}
			for(j=1;j<=b;j++)
			{
				if(b%j==0)
				{
					eb2=j;
			        if(eb1==eb2)
			           ebob=eb2;
				}
			}
		}
		printf("en buyuk ortak bolen : %d", ebob);
	}
	else
	{
		for(i=1;i<=b;i++)
		{
			if(b%i==0)
			{
			    eb1=i;
			}
			for(j=1;j<=a;j++)
			{
				if(a%j==0)
				{
				      eb2=j;
			        if(eb1==eb2)
			           ebob=eb2;
				}
			}
		}
		printf("en buyuk ortak bolen : %d", ebob);
		
	}
}
