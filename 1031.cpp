#include<stdio.h>
#include<string.h>

int main(){
	int quan[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char jiao[12]={'1','0','X','9','8','7','6','5','4','3','2'};
	int n;
	scanf("%d",&n);
	char id[19],b[101][19];
	int error = 0;
	int cnt = 0;
	for(int i = 0;i < n;i++){
		scanf("%s",id);
		int sum = 0;
		int j;
		for(j = 0;j < 17&&id[j]>='0'&&id[j]<='9';j++){
			sum += (id[j]-'0')*quan[j];
		}
		if(j == 17&&jiao[sum%11]==id[17]){
				cnt++;
		}else{
				strcpy(b[error],id);
				error ++;
		}
	}
	
	//Êä³ö 
	if(cnt == n){
		printf("All passed");
	}else{
		for(int i =0;i < error;i++) puts(b[i]);
	}
	return 0;
}
