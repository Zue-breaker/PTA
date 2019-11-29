#include<stdio.h>

typedef struct{
	char iName[6];
	int iYear;
	int iMonth;
	int iDate;
}PEOPLE;

int main(){
	int iNum;
	scanf("%d",&iNum);
	PEOPLE people[iNum+1];
	int iCnt = 0;
	int iYtemp = 0,iMtemp = 0,iDtemp = 0;
	int iMax = 0,iYMax = 0,iMMax = 0,iDMax = 0;
	int iMin = 0,iYMin = 2015,iMMin = 0,iDMin = 0;
	int itesttemp;
	for(int i = 0;i < iNum;i++){
		getchar();
		scanf("%s %d/%d/%d",&people[iCnt].iName,&iYtemp,&iMtemp,&iDtemp);
		itesttemp = iYtemp*10000+iMtemp*100+iDtemp;
		if(itesttemp >= 18140906 && itesttemp <= 20140906){
			people[iCnt].iYear = iYtemp;
			people[iCnt].iMonth = iMtemp;
			people[iCnt].iDate = iDtemp;
			if(iYMax < iYtemp||(iYMax == iYtemp&&iMMax < iMtemp)||(iYMax==iYtemp&&iMMax==iMtemp&&iDMax<iDtemp)){
				iMax = iCnt;
				iYMax = iYtemp;
				iMMax = iMtemp;
				iDMax = iDtemp;
			}
			if(iYMin > iYtemp||(iYMin == iYtemp&&iMMin > iMtemp)||(iYMin==iYtemp&&iMMin==iMtemp&&iDMin>iDtemp)){
				iMin = iCnt;
				iYMin = iYtemp;
				iMMin = iMtemp;
				iDMin = iDtemp;
			}
			iCnt ++;
		}
	}
	if(iCnt == 0){
		printf("0");
	}else{
		printf("%d %s %s",iCnt,people[iMin].iName,people[iMax].iName);
	}
	return 0;
}
