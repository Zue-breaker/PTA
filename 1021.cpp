#include<stdio.h>

int main(){
	int nums[10]={0};//¼ÆÊıÆ÷
	char n[1001]={0};
	gets(n);
	for(int i = 0; n[i] != '\0';i++ ){
		nums[n[i] - '0']++;
	}
	for(int i = 0;i < 10;i++ ){
		if(nums[i]){
			printf("%d:%d\n",i,nums[i]);
		}
	}
	return 0;
}
