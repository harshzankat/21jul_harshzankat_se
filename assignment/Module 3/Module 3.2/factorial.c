#include<stdio.h>

int main()
{
	int a,n=1,i ;
	printf("enter a number :") ;
	scanf("%d",&a) ;
	for(i=1 ; i<=a ; i++ )
	{	
		n*=i ;  // n=n*i
	printf ("%d \n",n) ;   
	}
 }

