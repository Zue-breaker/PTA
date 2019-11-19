#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
	if(n < 2) return 0;
	for (int i = 2;i <= sqrt(n);i++)
	{
		if(n%i == 0) return 0;
	}
	return 1;
}

int main()
{
	int N;
	int cnt = 0;
	scanf("%d",&N);
	for(int i = 2;i <= N-2;i++)//ע����Խ�磬�ӵ�һ������2��ʼ 
	{
		if(isPrime(i) && isPrime(i+2)) cnt++;
	}
	printf("%d",cnt);
	return 0; 
}
