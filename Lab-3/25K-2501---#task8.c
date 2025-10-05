#include<stdio.h>
int main(){
	float number;
	printf("Enter the number in decimal form: ");
	scanf("%f",&number);
	printf("The scientific notation value of %f is  %.6e",number,number);
	return 0;
	
}
