#include<stdio.h>

int main ()
{
	int arr[100];
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	m %= n;//make sure m < n
	//put out
	for(int i = n-m;i < n;i++)
		printf("%d ",arr[i]);
	for(int i = 0;i < n-m-1;i ++)
	{
		printf("%d ",arr[i]);
	}
	printf("%d",arr[n-m-1]);
	return 0;	
} 
