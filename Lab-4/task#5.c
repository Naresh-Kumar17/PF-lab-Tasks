#include<stdio.h>
int main(){
	float Marks;
	printf("Enter your Programming fundamental lab marks: ");
	scanf("%f",&Marks);
	if(Marks>=85 && Marks<=100){
		printf("Your grade is A");
		
	}else if(Marks<=84 && Marks>=75){
		printf("Your grade is B");}
	else if(Marks<=69 && Marks>=55  ){
		printf("Your grade is c");
	}
	else if(Marks<=54 && Marks>=40){
		printf("Your grade is D");
	}else if(Marks<40&& Marks>=0){
	printf("Your grade is f");	
	}else{
		printf("Invalid Marks");
	}
	return 0;
}
