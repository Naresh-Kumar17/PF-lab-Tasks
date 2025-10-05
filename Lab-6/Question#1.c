#include<stdio.h>
int main(){
	int number;
	double  factorial=1;
	printf("Enter a number whose factorail you want: ");
	scanf("%d",&number);
	for(int i=1;i<=number;i++){
		factorial =i*factorial;
	}
    printf("Factorial of %d is %lf  ",number,factorial);
	return 0;
}