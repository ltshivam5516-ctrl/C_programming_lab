#include<stdio.h>
int main(){
	
	int i,number,fact=1;
	printf("enter the value of number");
	scanf("%d",&number);
	
	for(i=1;i<6;i++){
		
		fact=fact*i;
	}
	
	printf("%d",fact);
	
	return 0;
	
	
	
	
	
	
	
}
