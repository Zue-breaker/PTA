#include<stdio.h>
#include<string.h>

int main(){
	char A[1001] = {0,};
	int Q = 0;
	int R = 0;
	int B;
	scanf("%s %d",A,&B);
	int flag = 0;
	for(int i = 0;i < strlen(A);i++){
		R = R * 10 + A[i] - '0';//从大位到小位读入
		Q = R / B;
		R = R % B;
		if(Q > 0) {
			flag =1;
		}
		if (flag == 1){
			printf("%d",Q);
		}
	}
	if(flag == 0){
		printf("0");
	}
	printf(" %d",R);
	return 0 ;
}