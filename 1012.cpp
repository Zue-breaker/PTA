#include<stdio.h>

int main ()
{
	int A[5] = {0,0,0,0,-1};
	int flag[5] = {0,};
	int N;
	scanf("%d",&N);
	int coef = 1;
	int cnt = 0;
	
	while(N--){
		int input;
		scanf("%d",&input);
		switch(input % 5)
		{
			case 0:
				if(input % 2 == 0){
					A[0] += input;
					flag[0] = 1;
					}
					break;
			case 1:
				A[1] += coef * input;
				coef *= -1;
				flag[1] = 1;
				break;
			case 2:
				A[2] ++;
				flag[2] = 1;
				break;
			case 3:
				A[3] += input;
				cnt ++;
				flag[3] = 1;
				break;
			case 4:
				if(input > A[4]) A[4] = input;
				flag[4] = 1;
	}
}
	if(flag[0]) printf("%d",A[0]); else printf("N");
	if(flag[1]) printf(" %d",A[1]); else printf(" N");
	if(flag[2]) printf(" %d",A[2]); else printf(" N");
	if(flag[3]) printf(" %.1f",A[3]*1.0/cnt); else printf(" N");
	if(flag[4]) printf(" %d",A[4]); else printf(" N");
	return 0;
} 
