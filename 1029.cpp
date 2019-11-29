#include<stdio.h>
#include<iostream>
#include<string.h>

int key(char c){
	if(c >= '0'&&c <= '9') return c-'0';//数组下标0-9 
	if(c >= 'A'&&c <= 'Z') return c-'A'+10;//数组下标10-35记录A-Z
	if(c >= 'a'&&c <= 'z') return c-'a'+10;//数组下标10-35记录a-z
	if(c=='_') return 36;//数组下标36记录_
	return -1;//其余字符 
}

int main(){
	char str1[81],str2[81];
	int arr[37]={0};
	
	scanf("%s",str1);
	scanf("%s",str2);
	
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	//记录好键,置1 
	for(int i = 0;i < len2;i++){
		arr[key(str2[i])] = 1;
	}
	//寻找坏键 
	for(int i = 0;i < len1;i++){
		int k = key(str1[i]);
		if(arr[k] == 0){
			if(str1[i] >= 'a'&&str1[i] <= 'z'){
				str1[i]-=32;
			}
			printf("%c",str1[i]);
			arr[k] = 1;//置1，避免重复输出 
		}
	}
	return 0;
}
