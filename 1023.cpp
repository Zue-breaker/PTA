#include<stdio.h>

int main(){
    int num[10];
    for(int i = 0;i < 10;i++){
        scanf("%d",&num[i]);
    }
    // 寻找最小首位
    int first;
    for(int i = 1;i < 10;i++){
        if(num[i] != 0) {
            first = i;
            num[i]--;
            break;
        }
    }

    printf("%d",first);
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < num[i];j++){
            printf("%d",i);
        }
    }
    return 0;
}
