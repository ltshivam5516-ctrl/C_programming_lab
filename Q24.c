#include<stdio.h>
int main(){
	
	int x,y,n;
	printf("enter the value of x,n");
	scanf("%d %d", &x,&n);
	
	if(n==1){
		
		y=1+x;
	}
	
	if(n==2){
		
		y=1+(x/n);
		
		
	}
	
	if(n==3){
		
		y=1+x^n;
		
	}
	
	
	if(n>3 || n<1){
		
		y=1+(n*x);
		
	}
	
	
	
	printf("y=%d", y);
	
	
	return 0;
	
	
	
}
