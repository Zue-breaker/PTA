#include<stdio.h>

int main(){
    int A,B,D;
    scanf("%d %d %d",&A,&B,&D);
    int sum;
    int num[100] = {0};
    int length = 0;

    sum = A + B;

    for(int i = 0;sum != 0;i++ ){
        num[i] = sum % D;
        sum /= D;
        length ++;
    }
    if(length == 0) printf("0");

    for(int i = length - 1; i >= 0;i--){
        printf("%d",num[i]);
    }
    return 0;
}
