#include<stdio.h>
#include<ctype.h>

int main(){
	int keyboard[128]={0};//ACII码共有128个字符
	char ch;
	//记录坏掉的键，置1 
	while((ch = getchar()) != '\n') {
		keyboard[toupper(ch)] = 1; //键坏了不管大小写 
	}
	while((ch = getchar()) != '\n'){
		if(keyboard[toupper(ch)] == 1||(isupper(ch) && keyboard['+'-'\0'] == 1)){
			continue;
			//isupper(ch)判断ch是否为大写
			//坏掉：键坏了||缺大写 +
		}
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
