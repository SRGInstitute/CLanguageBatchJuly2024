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
printf("%s\n",mayank.name);
printf("%d\n",mayank.rollno);
printf("%lf\n",mayank.phoneno);
printf("%s\n",mayank.dob);
printf("%d\n",mayank.age);
printf("%c\n",mayank.gender);
return 0;
}