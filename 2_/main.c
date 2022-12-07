#include<stdio.h>

int main()
{
 int i,j;
 int sayilar[100];
 	for(i=0;i<10;i++)
 	{
 		printf("dizi elemanini girin:");
 		scanf("%d",&sayilar[i]);
 		if(sayilar[i]==0)
 		{
 			break;
		 }
		 j=i;
	 }
	 
	for(i=0;i<=j;i++) 
	{
		printf("%d \n",sayilar[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 return 0;
}
