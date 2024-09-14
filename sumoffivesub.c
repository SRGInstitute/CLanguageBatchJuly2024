#include <stdio.h>
int main(){
	int sum , divide;
int Hindi,English,Math,Sst,Science,percentage;
printf("Enter the marks of Hindi\n");
scanf("%d",&Hindi);
printf("Enter the marks of English\n");
scanf("%d",&English);
printf("Enter the marks of Math\n");
scanf("%d",&Math);
printf("Enter the marks of Sst\n");
scanf("%d",&Sst);
printf("Enter the marks of Science\n");
scanf("%d",&Science);
sum = Science+Hindi+Sst+Math+English;
percentage = (float(sum)/500)*100;
printf("percentage of a  five subject(%d) is = %d\n",sum , percentage);
if (percentage>=90&&percentage<100){
	printf("\nexcellent");
}
	else if (percentage>80&&percentage<90){
		printf("\ngood");
	}
	else  if (percentage>60&&percentage<80){
		printf("\npoor");
	}
	else {
		printf("pure saal padh lete toh 60 percentage se kam  nahi aati ");
	}
return 0;
}