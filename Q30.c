#include<stdio.h>
int main(){
	
	int n,sum=0,q;
	printf("enter the value of n");
	scanf("%d", &n);
	
	while(n!=0){
		
		q=n%10;
		sum=sum*10+q;
		n=n/10;
		
		
		
		
		
	}
	
	
	printf("%d", sum);
	return 0;
	
	
	
	
	
}
