#include<stdio.h>
#include<math.h>

int IsPrime(int n){
	if(n < 2) return 0;
	for(int i = 2;i <= sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main (){
	int M,N;
	scanf("%d %d",&M,&N);
	int a[10000]={0,};
	int test = 2;
	int cnt = 0;
	while(cnt < N)
	{
		if(IsPrime(test))//test is a prime
		{
			a[cnt ++] = test;//record and find the next prime
		}
		test ++;
	}
	
	for(int i = M - 1;i < N;i++){
		printf("%d",a[i]);
		if(i != N-1) printf("%c",(i - (M - 2)) % 10 ?' ':'\n');
	}
	return 0;
}
