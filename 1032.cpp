#include<stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int sum[100001]={0};
	int school,score;
	int Max_school = 0,Max_sum = 0;
	for(int i = 0;i < N;i++){
		scanf("%d %d",&school,&score);
		sum[school-1] += score;
	}
	for(int i = 0;i < N;i++){
		if(sum[i] > Max_sum){
			Max_sum = sum[i];
			Max_school = i;
		}
	}
	printf("%d %d",Max_school+1,Max_sum);
	return 0;
}
