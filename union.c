#include<stdio.h>
union student { 
int rollno;
char name[20];
int age;
double fees;
}
int main () {
  union student s1 = {123, 'Mayank' , 12, 2000 };
  printf("\n name= %c ",s1.name[20]);
  }