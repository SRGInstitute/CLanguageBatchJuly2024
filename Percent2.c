#include <stdio.h>
int main(){
int Hindi,English,Math,Science,Sst,percent;
int sum,percentage;
printf("Enter the marks of Hindi\n");
scanf("%d",&Hindi);
printf("Enter the marks of English\n");
scanf("%d",&English);
printf("Enter the marks of Math\n");
scanf("%d",&Math);
printf("Enter the marks of Science\n");
scanf("%d",&Science);
printf("Enter the marks of Sst\n");
scanf("%d",&Sst);
sum = Hindi+English+Math+Sst+Science;
percentage = (float(sum)/500*100);
printf("percentage of a  five subject(%d) is = %d\n",sum , percentage);
if (percentage>=90){
printf("Grade of a person is A");
}
else {
	printf("Grade of a person is B");
}
}