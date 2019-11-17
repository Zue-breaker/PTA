#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s = 0;
    int i;
    int c[101];
    int format = 0;
    int k = 0;
    char a[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};//汉语拼音 
    char b[101];
    scanf("%s",b);
    for(i = 0;i < strlen(b);i++) s+=b[i]-'0';
    if(!s) printf("ling");
    //录入每个数上的数字 
    while(s > 0)
    {
        c[k] = s%10;
        s/=10;
        k++;
    }
    //将数字以拼音形式输出 
    for(i = k-1;i>=0;i--)
    {
        if (format++) printf(" ");
        printf("%s",a[c[i]]);
    }
}
