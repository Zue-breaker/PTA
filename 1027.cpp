#include<stdio.h>

int main(){
	char c;
	int N;
	scanf("%d %c",&N,&c);
	int row = 1;//���������ε���������еķ��Ÿ���Ϊ 2 * row -1 
	//����row��ʣ�µķ��Ÿ��� 
	while(2*row*row - 1 <= N) {
		row ++;
	}
	int left;
	row --;
	left = N-2*row*row+1;

	char put[2*row-1][2*row-1];
	//ȫ����Ϊ�ո�
	for(int i = 0;i < 2*row-1;i++){
		for(int j = 0;j < 2*row-1;j++){
			put[i][j] = ' ';
		}
	} 
	//����������
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
	
	//��������ά�������
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
