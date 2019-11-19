#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	long long A , B , C;
	
	for(int i = 0;i < T;i++)
	{
		scanf("%ld %ld %ld",&A,&B,&C);
		printf("Case #%d: %s\n",i+1,A + B > C?"true":"false");
	}
	return 0;
}
