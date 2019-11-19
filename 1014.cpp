//PTA Basic Level 1014
#include<stdio.h>
#include<ctype.h>

int main(){
	char str1[61],str2[61],str3[61],str4[61];
	scanf("%s %s %s %s",str1,str2,str3,str4);
	
	//find day
	int day;
	char week[][4]= {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for(day = 0;str1[day]&&str2[day];day ++){
		if(str1[day] == str2[day] && str1[day] >='A' && str1[day] <= 'G' ){
			printf("%s ",week[str1[day] - 'A']);
			break;
		}
	}
	
	//find hour
	int hour;
	for(hour = day + 1;str1[hour] && str2[hour];hour ++){
		if(str1[hour] == str2[hour]){
			if(str1[hour] >= 'A' && str1[hour] <= 'N'){
				printf("%02d",str1[hour]-'A'+10);
				break;
			}
			if(isdigit(str1[hour])){
				printf("%02d",str1[hour]-'0');
				break;
				}
		}
	}
	
	//find minute
	int minute;
	for(minute = 0; str3[minute] && str4[minute];minute ++){
		if(str3[minute] == str4[minute] && isalpha(str3[minute])){
			printf(":%02d",minute);
			break;
		}
	}
	return 0;
}
