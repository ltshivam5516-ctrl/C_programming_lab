#include<stdio.h>
int main(){
	
	int n,i,sumodd=0,sumeven=0;
	printf("enter the value of n");
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		
		if(i%2==0){
			sumeven=sumeven+i;
		}
		
		else {
			
			sumodd=sumodd+i;
			
			
		}
		
		
		
		
	}
	
	printf("sum of even numbers=%d\n",sumeven);
	printf("sum of odd numbers=%d\n",sumodd);
	

	return 0;
	
	
	
	
	
	
	
	
	
}
