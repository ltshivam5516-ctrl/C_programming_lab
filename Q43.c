#include<stdio.h>
int main(){

   float sales,commission;
   printf("enter the value of sales");
   scanf("%f", &sales);
   
   if (sales<=500){
   	
   	commission=(sales*5)/100;
   	printf("%f", commission);
   	
   }	
  
  else if (sales>500 && sales<=2000){
  	
  	commission=35+(sales-500)*1/10;
  	printf("%f", commission);
  }
  
  else if (sales>2000 && sales<=5000){
  	
  	commission=185+(sales-2000)*12/100;
  	printf("%f", commission);
  	
  }
  
  else {
  	
  	commission=(sales*12.5)/100;
  	printf("%f", commission);
  	
  }
  
  
  
  
  
  
  
  return 0;
}
