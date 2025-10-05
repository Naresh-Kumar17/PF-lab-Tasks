#include<stdio.h>
int main(){
   	int number;
	printf("Enter a Number: ");
	if(scanf("%d",&number)!=1){
		printf("You enter an invalid Number");
		return 1;
	}
	if(number%2==0){
		printf("You entered a Even Number.");
	}else{
	printf("You entered a Odd Number.");	
	}
	return 0;
	
}
