#include<stdio.h>

int main()
{
	int K , n , number[101]={0};//K means the amount of key numbers. 
	scanf("%d",&K);
	
	for(int i = 0;i < K;i++)
	{
		scanf("%d",&n);
		number[n] = 1;
	}
	
	//find numbers needed to test
	for(int i = 1;i <=100;i++)
	{
		if(number[i])
		{
			int j = i;
			while(j != 1)
			{
				if(j % 2) j = (3*j+1)/2;
				else      j /=2;
				
				if(j <=100 && number[j])
				{
					number[j] = 0;
					K --;
					if(j < i) break; //did this before,no need going on
				}
			}
		}
	}
	
	for(int i = 100;i >= 1;i--)
	{
		if(number[i])
		{
			printf("%d%c",i,--K?' ':'\0');
		}
	}
	return 0;
 } 
