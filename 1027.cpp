#include<stdio.h>

int main(){
	char c;
	int N;
	scanf("%d %c",&N,&c);
	int row = 1;//单个三角形的行数，最长行的符号个数为 2 * row -1 
	//计算row与剩下的符号个数 
	while(2*row*row - 1 <= N) {
		row ++;
	}
	int left;
	row --;
	left = N-2*row*row+1;

	char put[2*row-1][2*row-1];
	//全部置为空格
	for(int i = 0;i < 2*row-1;i++){
		for(int j = 0;j < 2*row-1;j++){
			put[i][j] = ' ';
		}
	} 
	//将符号填入
	int memo = 2*row-1;
	int begin = 0;
	for(int i = 0;i < row;i++){
		for(int j =begin ;j < memo;j++){
			put[i][j] = c;
			put[2*row-2-i][j]=c;
		}
		memo --;
		begin ++;
	}  
	
	//将整个多维数组输出
    int end = 2*row-1;
	for(int i = 0;i < row;i++){
		for(int j =0;j < end;j++){
			printf("%c",put[i][j]);
		}
		printf("\n");
        end --;
	} 
	end = row + 1;
    for(int i = row;i < 2*row-1;i++){
        for(int j = 0;j < end;j++){
            printf("%c",put[i][j]);
        }
       printf("\n");
        end++;
    }
	printf("%d",left);
	return 0;
}
