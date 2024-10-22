#include<stdio.h>
struct student {
char name[20]; 
int rollno;
double phoneno;
char dob[20];
int age;
char gender;
};
int main () {
	struct student mayank={"mayank", 20090,7535854195,"21/2/2024", 2, 'm' };
for (int i=0; i<8; i++) {
  scanf("%s\n %d\n %lf\n %d\n %d\n %c\n", &mayank.name,&mayank.rollno,&mayank.phoneno,&mayank.dob,&mayank.age,&mayank.gender);
  }
printf("%s\n",mayank.name);
printf("%d\n",mayank.rollno);
printf("%lf\n",mayank.phoneno);
printf("%s\n",mayank.dob);
printf("%d\n",mayank.age);
printf("%c\n",mayank.gender);
  return 0;
  }