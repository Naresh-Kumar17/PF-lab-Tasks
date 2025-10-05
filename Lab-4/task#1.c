#include<stdio.h>
int main(){
	float number;
	printf("Enter Number: ");
	if(scanf("%f",&number) !=1){
	printf("You entered invalid Number");
	return 0;}
	if(number<0){
	printf("You entered a negatvie Number");
	}else if(number>0){
	printf("You entered a Positve Number");
	}else{
	printf("You entered a Zero");
	}
return 0;	
}
