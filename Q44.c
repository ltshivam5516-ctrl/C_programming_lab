#include<stdio.h>
int main(){
  
  float unit,amountpaid;
  printf("enter the value of units");
  scanf("%f", &unit);
  
  if (unit>0&&unit<=200){
  	
  	amountpaid=unit*0.50;
  	printf("%f", amountpaid);
  }	
 else if (unit>200&&unit<=400){
 	
 	amountpaid=100+(unit-200)*0.65;
 	printf("%f", amountpaid );
 	
 }
 
 else if (unit>400&&unit<=600){
 	
 	amountpaid=230+(unit-400)*0.80;
 	printf("%f", amountpaid);
 }
 else {
 	
 	amountpaid=425+(unit-600)*125;
 	printf("%f", amountpaid);
 	
 }
 
 return 0;
}
