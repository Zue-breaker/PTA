#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);//�����ַ�������
	int i;
	char s[101];
	for(i = 0;i<n;i++)
	{
		scanf("%s",s);//�����ַ���
		int j;
		int length=strlen(s);
		int Number_P=0,Location_P,Number_T=0,Location_T,Other=0;
		for(j=0;j<length;j++)
		{
			if(s[j]=='P'){
				Number_P ++;
				Location_P=j;
			}else if(s[j]=='T'){
				Number_T ++;
				Location_T=j;
			}else if(s[j]!='A'&&s[j]!=' '){
				Other ++;
			}
		}
		int x,y,z;//��¼ǰ�к�A������ 
		x=Location_P;
		y=Location_T-Location_P-1;
		z=length-Location_T-1;
		if(Number_P!=1||Number_T!=1||x*y!=z||Other!=0||Location_T-Location_P<=1){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	 } 
	return 0;
}
