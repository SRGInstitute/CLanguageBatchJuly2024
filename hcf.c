#include<stdio.h>
int gcd(int a, int b);
int main() {
   int a, b;
   
  printf("enter two num");
  scanf("%d%d", &a,&b);
    int result = gcd(a,b);
	
	
        printf("GCD of %d and %d is %d\n",a,b,result);
		
		return 0;
		}
		int gcd(int a, int b){
		while(a!=b)
		{
		if(a>b){
		    a=a-b;
		}
			else
			{
		      b=b-a;
			  }
			  }
			  return a;
		}
			  
		