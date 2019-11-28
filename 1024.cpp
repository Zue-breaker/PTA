#include<stdio.h>
#include<string.h>

int main(){
	char A[10002];
	scanf("%s",A);
	int length = strlen(A);
	
	if(A[0] == '-') printf("-");
	int pos = 0;//记录E的位置
	while(A[pos] != 'E'){
		pos ++;
	} 
	int exponent = 0;//记录指数 
	for(int i = pos + 2;i < length;i++){
		exponent = 10 * exponent + A[i] - '0';
	}
	
	if(exponent == 0){
		for(int i = 1;i < pos;i++ ){
			printf("%c",A[i]);
		}
	}
	if(A[pos+1] == '-'){//指数为负 
		printf("0.");
		for(int i = 0;i < exponent - 1;i++) printf("0");
		printf("%c",A[1]);
		for(int i = 3;i < pos;i++ ) printf("%c",A[i]);
	}else{//指数为正 
		for(int i = 1;i < pos;i++ ){
			if(A[i] == '.') continue;
			printf("%c",A[i]);
			if(pos - 3 > exponent && i - 2 == exponent ) printf(".");
		}
		//若pos - 3 < exponent,在数后添加0
		for(int i = 0;i < exponent - (pos - 3);i++) printf("0");
	}
	return 0;
} 
