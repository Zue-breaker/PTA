#include<stdio.h>
#include<stdlib.h>
#define MAXN 1001

//定义月饼结构体
typedef struct{
	double stock;//库存
	double price;//总价 
	double each;//单价 
}mooncake;

int cmp(const void *a,const void *b){
	mooncake c1 = *(mooncake *)a;
	mooncake c2 = *(mooncake *)b;
	return c2.each > c1.each;//按单价each降序返回 
} 

int main(void){
	int N,i;
	double D,total;
	mooncake cake[MAXN];
	
	scanf("%d %lf",&N,&D);
	for(i = 0;i < N;i++ ) scanf("%lf",&cake[i].stock);
	for(i = 0;i < N;i++ ) scanf("%lf",&cake[i].price);
	for(i = 0;i < N;i++ ) cake[i].each = cake[i].price / cake[i].stock;
	//快速排序
	qsort( cake,N,sizeof(mooncake),cmp);
	total = 0;
	//遍历
	for(i = 0;i < N && D > 0;i++){
		if( cake[i].stock <= D){
			total += cake[i].price;
			D -= cake[i].stock;
		}else{
			total += D * cake[i].each;
			D = 0;
		}
	} 
	printf("%.2f\n",total);
	
	return 0;
}
