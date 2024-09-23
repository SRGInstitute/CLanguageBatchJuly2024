#include<stdio.h>
#include<math.h>
int digit(int n,int sum=0){
  if(n==0)
  {
  return 0;
  }
  else{
  sum=abs(n%10);
  n/=10;
  return sum + digit(n,sum);
  }
}
  int main (){
	  int n,  sum=0;
  printf("enter number");
  scanf("%d",&n);
  int result= digit(n,sum);
  printf("%d",result);
  return 0;
  }
  