#include<stdio.h>
int main(){
	
    int num,i,fact=1;
    float sum=0;
    
    printf("enter the value of number");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
    	
    	fact=fact*i;
    	sum=sum+(float)i/fact;
    	
    	
    	
	}
	
	
	printf("%f", sum);
	return 0;
	
}
