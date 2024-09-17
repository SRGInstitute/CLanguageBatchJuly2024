#include <stdio.h>
int main(){
int Hindi,English,Math,Science,Sst,percent;
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
percent = (float(sum)/500*100);
return 0;
}