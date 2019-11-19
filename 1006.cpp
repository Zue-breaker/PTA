#include<stdio.h>

int main()
{
	int bai,shi,ge,n;
	scanf("%d",&n);
	
	//record each digit
	bai = n/100;
	ge = n%10;
	n /=10;
	shi = n%10;
	
	//put 'B','S'and'12...n'
	int i;
	if(bai)
		for(i = 0;i < bai;i++) printf("B");
	if(shi)
		for(i = 0;i < shi;i++) printf("S");
	for(i = 1;i <= ge;i++) printf("%d",i);
	
	return 0; 
 } 
