#include<stdio.h>

int main(){
	int N , A_win = 0 , A_lose = 0;
	scanf("%d",&N);
	char A,B;
	int cnt_A[3] = {0};
	int cnt_B[3] = {0};
	for(int i = 0;i < N;i++){
		getchar();
		scanf("%c %c",&A,&B);
		if(A == 'B' && B == 'C'){
			A_win ++;
			cnt_A[0] ++;
		}else if(A == 'B' && B == 'J'){
			A_lose ++;
			cnt_B[2] ++;
		}else if(A == 'C' && B == 'B'){
			A_lose ++;
			cnt_B[0] ++;
		}else if(A == 'C' && B == 'J'){
			A_win ++;
			cnt_A[1] ++;
		}else if(A == 'J' && B == 'B'){
			A_win ++;
			cnt_A[2] ++;
		}else if(A == 'J' && B == 'C'){
			A_lose ++;
			cnt_B[1] ++;
		}
	}
	
	printf("%d %d %d\n",A_win,N-A_win-A_lose,A_lose);
	printf("%d %d %d\n",A_lose,N-A_win-A_lose,A_win);
	
	int max_A = (cnt_A[0] >= cnt_A[1])? 0 : 1;
		max_A = (cnt_A[max_A] >= cnt_A[2])? max_A : 2;
	int max_B = (cnt_B[0] >= cnt_B[1])? 0 : 1;
		max_B = (cnt_B[max_B] >= cnt_B[2])? max_B : 2;
	char str[4]={"BCJ"};
	printf("%c %c",str[max_A],str[max_B]);
	return 0;
} 
