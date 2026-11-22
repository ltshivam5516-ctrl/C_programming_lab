#include<stdio.h>
int main(){
	
    int i,num,sqaure;
    printf("enter the value of number");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++){
    	
    	sqaure=i*i;
    	printf("%d\n", sqaure);
    	
	}
	
	return 0;
	
}
