#include <stdio.h>
int main()
{
	int a,b,x,y,ekok,i=1,j=1,k=1,m=1,ek1,ek2,flag;
	printf("ekoku bulunacak iki sayiyi giriniz : ");
	scanf("%d%d", &a,&b);
	if(b>a)
	{
		while(i>0)
		{
			x=b*i;
			ek1=x;
			i++;
			while(j>0)
			{
				y=a*j;
				ek2=y;
			    j++;    
			    if(ek1==ek2)
			    {
			    	ekok=ek2;
			        flag=1;
			    	break;
				}
				else if(y>x)
					break;
			}
			if(flag==1)
			    break;

		}
		printf("en kucuk ortak kat : %d\n", ekok);
	}
	else 
	{
		while(i>0)
		{
			x=b*i;
			ek1=x;
			i++;
			while(j>0)
			{
				y=a*j;
				ek2=y;
			    j++;    
			    if(ek1==ek2)
			    {
			    	ekok=ek2;
			        flag=1;
			    	break;
			    	
				}
				else if(y>0)
			        break;
			}
			if(flag==0)
	        break;        
	    }
	    printf("en kucuk ortak kat : %d\n", ekok);

	    
	}
	
}
