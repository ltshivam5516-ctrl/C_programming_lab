#include<stdio.h>
int main(){
	
	int  n,sum=0,q;
	printf("enter the value of number");
	scanf("%d", &n);
	
     while(n>=10){
     	
     	sum=0;
     	
     	while(n!=0){
     		
     		q=n%10;
     		sum=sum+q;
     		n=n/10;
     		
     		
		 }
     	
     	n=sum;
     	
	 }
	
	printf("%d", sum);
	return 0;
	
	
	
	
}
