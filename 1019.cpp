#include<stdio.h>
//冒泡排序，从小到大 
void sortSheng(int a[],int length){
	int i,j,temp;
	for(i = 0;i < length-1;i++){
		for(j = 0;j < length-i-1;j++){
		if(a[j] > a[j+1]){
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}
		}
	}
}
//冒泡排序，从大到小
 void sortJiang(int a[],int length){
 	int i,j,temp;
 	for(i = 0;i < length-1;i++){
 		for(j = 0;j < length-i-1;j++){
 			if(a[j] < a[j+1]){
 				temp = a[j];
 				a[j] = a[j+1];
 				a[j+1] = temp;
			 }
		 }
	 }
 }
 //整型数组转数字
 int to_number(int a[],int length){
 	int num = 0;
 	for(int i = 0;i < length;i++){
 		num = num*10+a[i];
	 }
	 return num;
 } 
 //数字转数组
 int to_array(int n,int num[]){
 	int i;
 	for(i = 0;i < 4;i++){
 		num[i] = n%10;
 		n /= 10;
	 }
 } 
 
 int main(){
 	int max,min,n;
 	int num[4];
 	scanf("%d",&n);
 	while(1){
 		to_array(n,num);
 		sortJiang(num,4);
 		max = to_number(num,4);
 		sortSheng(num,4);
 		min = to_number(num,4);
 		n = max-min;
 		printf("%04d - %04d = %04d\n",max,min,n);
 		if(n == 0||n == 6174) break;
	 }
	 return 0;
 } 
