#include<stdio.h>

int main(){
	int D_A,D_B;
	char A[11],B[11];
	scanf("%s %d %s %d",&A,&D_A,&B,&D_B);
	int P_A = 0;
	int	P_B = 0;

	//calculate P_A
	for(int i = 0;A[i] != '\0';i++){
		if(A[i]-'0' == D_A){
			P_A = P_A * 10 + D_A;
	 }
	}
	//calculate P_B
	for(int i = 0;B[i] != '\0';i++){
		if(B[i]-'0' == D_B){
			P_B = P_B * 10 + D_B;
	 }
	}

	printf("%d",P_A + P_B);
	return 0;
}
