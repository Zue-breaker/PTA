#include<stdio.h>
#include<ctype.h>

int main(){
	int keyboard[128]={0};//ACII�빲��128���ַ�
	char ch;
	//��¼�����ļ�����1 
	while((ch = getchar()) != '\n') {
		keyboard[toupper(ch)] = 1; //�����˲��ܴ�Сд 
	}
	while((ch = getchar()) != '\n'){
		if(keyboard[toupper(ch)] == 1||(isupper(ch) && keyboard['+'-'\0'] == 1)){
			continue;
			//isupper(ch)�ж�ch�Ƿ�Ϊ��д
			//������������||ȱ��д +
		}
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
