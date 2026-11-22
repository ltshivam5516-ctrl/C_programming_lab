#include<stdio.h>
int main(){
	
	int n,sum=0,lt;
	printf("enter the value of n");
	scanf("%d", &n);
	
	while(n!=0){
		
		lt=n%10;
		sum=sum+lt;
		n=n/10;
		
		
	}
	
	
	
	printf("%d", sum);
	return 0;
	
	
	
	
	
	
	
}
