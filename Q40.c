#include<stdio.h>
int main(){
	
  int num,sum=0;
  printf("enter the value of number");
  scanf("%d", &num);
  
  while(num>=0){
  	
  	sum=sum+num;
    printf("enter the next number");
    scanf("%d", &num);
    
  	
  }
		printf("%d\n", sum);
	return 0;
}
