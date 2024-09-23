#include<stdio.h>
int main () {
	int i=1;
	int sum=0;
	while(i<=10) {
		sum+=i;
		if(sum>20) {
			break;
		}
		i++;
	}
	printf("i  %d,  sum  %d\n",i,sum);
		return 0;
}
	
