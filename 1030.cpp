#include<stdio.h>
#include<stdlib.h>

int cmp(const void*a,const void*b){
    return*(int *)a - *(int *)b;
}

int main(){
    int N;
    long long p;
    scanf("%d %ld",&N,&p);
    int num[N];
    for(int i = 0;i < N;i++){
        scanf("%d",&num[i]);
    }
    //ÉýÐòÅÅÁÐ
    qsort(num,N,sizeof(num[0]),cmp);
    int result = 0;
    int temp = 0;
    for(int i = 0;i < N;i++){
        for(int j = i + result;j < N;j++){
            if(num[j] <= num[i]*p){
                temp = j-i+1;
                if(temp > result) result = temp;
            }else{
                break;
            }
        }
    }
    printf("%d",result);
    return 0;
}
